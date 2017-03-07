#IMPORTANT PLEASE COMPILE WITH:: coffee -cbw widget.coffee
cache = {}
jQuery.cachedAsset = (url, options) ->
  if /\.css$/.test(url)
    $("<link/>",
      rel: "stylesheet"
      type: "text/css"
      href: url
    ).appendTo("head")
    return {
      done:(fn)->
        fn()
    }
  else
    success = []
    head = document.head or document.getElementsByTagName('head')[0] or
      document.documentElement
    script = document.createElement 'script'
    script.async = 'async'
    script.src   = url
    successful = false
    onload = (_, aborted = false) ->
      return unless (aborted or
      not script.readyState or script.readyState is 'complete')
      clearTimeout timeoutHandle
      script.onload = script.onreadystatechange = script.onerror = null
      head.removeChild(script) if head and script.parentNode
      script = undefined
      if success and not aborted
        successful = true
        for s in success
          s()
        success = []
    script.onload = script.onreadystatechange = onload
    script.onerror = ->
      onload null, true
    timeoutHandle = setTimeout script.onerror, 7500
    head.insertBefore script, head.firstChild
    return {
      done:(fn)->
        if not successful
          success.push(fn)
        else
          fn()
        return 
      }

jQuery.unparam = (value) ->
  params = {}
  pieces = value.split("&")
  pair = undefined
  i = undefined
  l = undefined
  i = 0
  l = pieces.length
  while i < l
    pair = pieces[i].split("=", 2)
    params[decodeURIComponent(pair[0])] = ((if pair.length is 2 then decodeURIComponent(pair[1].replace(/\+/g, " ")) else true))
    i++
  params
template  = tmpl = (str, data) ->
  # Simple JavaScript Templating
  # John Resig - http://ejohn.org/ - MIT Licensed
  fn = (if not /\W/.test(str) then cache[str] = cache[str] or tmpl(str) else new Function("obj", "var p=[],print=function(){p.push.apply(p,arguments);};" + "with(obj){p.push('" + str.replace(/[\r\t\n]/g, " ").split("{{").join("\t").replace(/((^|}})[^\t]*)'/g, "$1\r").replace(/\t=(.*?)}}/g, "',$1,'").split("\t").join("');").split("}}").join("p.push('").split("\r").join("\\'") + "');}return p.join('');"))
  (if data then fn(data) else fn)

Mini =
  compile:(t)->
    {
      render:template(t)
    }
parseSuggestions = (data)->
  for a of data
    if a == 'suggestions'
      return data[a]
    else
      d = parseSuggestions(data[a])
      if d?
        return d
  return null
loaded = {}
once = (f)->
  executed = false
  () ->
    if not executed
      executed = true
      f.apply(this, arguments)
lazy_load = (requirements,fn,that)->
  if requirements.length == 0
    return ()->
      a = arguments
      fn.apply(that,a)

  if not that?
    that = window
  return ()->
    a = arguments
    if not args?
      args = []
    counter = requirements.length + 1
    self = @
    done = ()->
        counter = counter - 1
        if counter == 0
          fn.apply(that,a)
        return
    for r in requirements
      if not loaded[r]?
        loaded[r]=$.cachedAsset(r)
      loaded[r].done(done)
            
    done()
find_control = (root, name) ->
  children = root.children()
  if children.length
    matching = children.filter('[data-name='+name+']')
    if matching.length
      matching.first()
    else
      find_control children.filter(':not([data-name])'), name
  else
    null

build_control = (control_name, state, control)->
  $el = find_control(control.$el, control_name)
  if $el == null
    return null
  if $el.data('control')?
    return $el.data('control')
  #get control type
  type = $el.data('type')
  #create class
  typeclass = null
  try
    typeclass = eval(type)
  catch e
    typeclass = WSF_CONTROL
  if type? and typeclass?
    return new typeclass(control, $el, control_name, state)
  return null

class WSF_VALIDATOR
  constructor: (@parent_control, @settings)->
    @error = @settings.error
    return

  validate: ()->
    return true

class WSF_REGEXP_VALIDATOR extends WSF_VALIDATOR
  constructor: ()->
    super
    @pattern = new RegExp(@settings.expression,'g')

  validate: ()->
    val = @parent_control.value()
    res = val.match(@pattern)
    return (res!=null)

class WSF_MIN_VALIDATOR extends WSF_VALIDATOR

  validate: ()->
    val = @parent_control.value()
    return (val.length>=@settings.min)

class WSF_MAX_VALIDATOR extends WSF_VALIDATOR

  validate: ()->
    val = @parent_control.value()
    return (val.length<=@settings.max)


class WSF_CONTROL
  requirements: []
  constructor: (@parent_control, @$el, @control_name, @fullstate)->
    @state = @fullstate.state 
    @load_subcontrols()
    @isolation = (""+@$el.data('isolation')=="1")
    @$el.data('control',@)
    @initialize = lazy_load @requirements, @attach_events, @
    @initialize = once @initialize
    return

  load_subcontrols: ()->
    if @fullstate.controls?
      @controls=(build_control(control_name, state, @) for control_name, state of @fullstate.controls)
    else
      @controls = []
    return

  attach_events: ()->
    console.log "Attached #{@control_name}"
    for control in @controls
      if control?
        control.initialize()
    return

  update: (state)->
    return 

  process_actions: (actions)->
    for action in actions
      try
        fn = null
        #Check if action exists in class then check global
        if @[action.type]?
          fn = @[action.type]
          fn.call(@, action)
        else
          fn = eval(action.type)
          fn(action)
      catch e
        console.log "Failed preforming action #{action.type}"
    return
 
  process_update: (new_states)->
    try
      if new_states?.actions?
        @process_actions(new_states.actions)
      if new_states?[@control_name]?
        @update(new_states[@control_name])
        for control in @controls
          if control?
            control.process_update(new_states[this.control_name]['controls'])
    catch e
      console.error(e)
      return
    return
    
  get_context_state : ()->
    if @parent_control? and not @isolation
      return @parent_control.get_context_state()
    return @wrap(@control_name,@fullstate)

  get_full_control_name: ()->
    if @parent_control? 
      val = @parent_control.get_full_control_name()
      if val != ""
        val = val + "-"
      return val+@control_name
    return @control_name

  wrap : (cname,state)->
    ctrs = {}
    ctrs[cname] = state
    state = {"controls":ctrs}
    if @parent_control?
      return @parent_control.wrap(@parent_control.control_name,state)
    return state

  callback_url: (params)->
    if @parent_control?
      return @parent_control.callback_url(params)
    $.extend params, @url_params
    @url + '?' + $.param(params)

  trigger_callback: (control_name,event,event_parameter)->
    @run_trigger_callback(@get_full_control_name(),event,event_parameter)

  get_page:()->
    if @parent_control?
      return @parent_control.get_page()
    return @

  run_trigger_callback: (control_name,event,event_parameter)->
    if @parent_control? and not @isolation
      return @parent_control.run_trigger_callback(control_name,event,event_parameter)
    self = @
    return $.ajax
      type: 'POST',
      url: @callback_url
                      control_name: control_name
                      event: event
                      event_parameter: event_parameter
      data:
        JSON.stringify(@get_context_state())
      processData: false,
      contentType: 'application/json',
      cache: no
    .done (new_states)->
      #Update all classes
      self.get_page().process_update(new_states)
      
  #Simple event listener

  #subscribe to an event
  on: (name, callback, context)->
    if not @_events?
      @_events = {}
    if not @_events[name]?
      @_events[name] = []
    @_events[name].push({callback:callback,context:context})
    return @

  #trigger an event
  trigger: (name)->
    if not @_events?[name]?
      return @
    for ev in @_events[name]
      ev.callback.call(ev.context)
    return @

  remove:()->
    for control in @controls
      control?.remove()
    console.log "Removed #{@control_name}"
    @$el.remove()


class WSF_PAGE_CONTROL extends WSF_CONTROL
  constructor: (@fullstate)->
    @state = @fullstate.state
    @parent_control=null
    @$el = $('[data-name='+@state.id+']') 
    @control_name = @state.id
    @url = @state['url']
    @url_params = jQuery.unparam(@state['url_params'])
    @$el.data('control',@)
    @initialize = lazy_load @requirements, @attach_events, @
    @initialize = once @initialize
    @load_subcontrols()

  process_update: (new_states)->
    for control in @controls
      if control?
        control.process_update(new_states)

    return
    
  get_full_control_name: ()->
    ""

  wrap : (cname,state)->
    state

  remove:()->
    for control in @controls
      control?.remove()
    console.log "Removed #{@control_name}"
    @$el.remove()
    
class WSF_SLIDER_CONTROL extends WSF_CONTROL
  requirements: ['/assets/bootstrap.min.js']
  attach_events: ()->
    super
    id = "slider"+Math.round(Math.random()*10000) 
    @$el.attr("id",id)
    @$el.find("ol li").attr("data-target","#"+id)
    @$el.find(".carousel-control").attr("href","#"+id)

class WSF_DROPDOWN_CONTROL extends WSF_CONTROL
  requirements: ['/assets/bootstrap.min.js']

controls = {}

class WSF_BUTTON_CONTROL extends WSF_CONTROL
  attach_events: ()->
    super
    self = @
    @$el.click (e)->
      e.preventDefault()
      self.click()

  click: ()->
    if @state['callback_click']
      @trigger_callback(@control_name, 'click')

  update: (state) ->
    if state.disabled != undefined
      @state['disabled'] = state.disabled
      @$el.prop('disabled', state.disabled)
    if state.text?
      @state['text'] = state.text
      @$el.text(state.text)

class WSF_INPUT_CONTROL extends WSF_CONTROL
  attach_events: ()->
    super
    self = @
    @$el.change ()->
      self.change()

  change: ()->
    #update local state
    @state['text'] = @$el.val()
    if @state['callback_change']
      @trigger_callback(@control_name, 'change')
    @trigger('change')

  value:()->
    return @$el.val()

  update: (state) ->
    if state.disabled != undefined
      @state['disabled'] = state.disabled
      @$el.prop('disabled', state.disabled)
    if state.text?
      @state['text'] = state.text
      @$el.val(state.text)

class WSF_FILE_CONTROL extends WSF_CONTROL
  constructor: ()->
    super
    @uploading = false

  start_upload: ()->
    if @$el[0].files.length==0
      return
    if @uploading
      return 
    @uploading = true
    @$el.hide()
    @progressbar = $ """<div class="progress progress-striped active upload"><div rstyle="width: 10%;" class="progress-bar"></div></div>"""
    @$el.parent().prepend(@progressbar)

    formData = new FormData();
    action = @callback_url
                      control_name: @get_full_control_name()
                      event: "uploadfile"
                      event_parameter: "" 
    file = @$el[0].files[0];
    formData.append('file', file)
    formData.append('state', JSON.stringify(@get_context_state()))
    @sendXHRequest(formData, action)

  sendXHRequest: (formData, uri)->
    #Get an XMLHttpRequest instance
    xhr = new XMLHttpRequest();
    self = @
    onprogressHandler = (evt)->
      percent = evt.loaded/evt.total*100
      self.progressbar.find('.progress-bar').css {'width':percent+"%"}
    onstatechange = (evt)->
        if xhr.readyState==4 && xhr.status==200 
          self.get_page().process_update(JSON.parse(xhr.responseText))

    xhr.upload.addEventListener('progress', onprogressHandler, false); 

    
    xhr.addEventListener('readystatechange', onstatechange, false);
    xhr.open('POST', uri, true);
    xhr.send(formData);

  attach_events: ()->
    super
    self = @
    @$el.change ()->
      self.change()
    @refresh()

  change: ()->
    #update local state
    @state['file_name'] = null
    @state['file_type'] = null
    @state['file_size'] = null 
    @state['file_id'] = null 
    if @$el[0].files.length>0
      file = @$el[0].files[0]
      @state['file_name'] = file.name
      @state['file_type'] = file.type
      @state['file_size'] = file.size
    if @state['image_preview']
      reader = new FileReader();
      reader.readAsDataURL(@$el[0].files[0]);
      self = @
      reader.onload = (e)->
          self.$el.parent().find("img").remove() 
          preview = $("""<img >""").addClass("media thumbnail")
          preview[0].src = e.target.result
          self.$el.parent().append(preview)
    if @state['callback_change']
      @trigger_callback(@control_name, 'change')
    @trigger('change')

  value:()->
    return @$el.val()

  update: (state) ->
    if state.image_preview != undefined
      @state['image_preview'] = state.image_preview 
      @refresh()
    if state.disabled != undefined
      @state['disabled'] = state.disabled
      @$el.prop('disabled', state.disabled)
      @refresh()
    if state.file_name != undefined
      @state['file_name'] = state.file_name 
    if state.file_type  != undefined
      @state['file_type'] = state.file_type 
    if state.file_size  != undefined
      @state['file_size'] = state.file_size 
    if state.file_id != undefined
      if @state['file_id'] != state.file_id
        @state['file_id'] = state.file_id
        if @state['callback_uploaddone'] 
          @trigger_callback(@control_name, 'uploaddone')
        @uploading = false
      @refresh()

  refresh: ()->
    if @uploading
      return
    @progressbar?.remove()
    @$el.parent().find("p, img").remove() 
    if @state['file_id']?
      @$el.hide()
      fname = $("""<p></p>""").addClass("form-control-static").text(@state['file_name'])
      @$el.parent().append(fname)
      if @state['image_preview']
        preview = $("""<img >""").attr('src', @state['file_id']).addClass("media thumbnail")
        @$el.parent().append(preview)
      if not @state['disabled']
        fname.append(" ");
        removebtn = $("<button />").text("Remove").addClass("btn btn-xs btn-danger")
        self = @
        removebtn.click ()->
          self.progressbar?.remove()
          self.$el.parent().find("p, img").remove()
          self.$el.show()
          self.$el.val('')
          self.change()
        fname.append(removebtn)
    else
      @$el.show()
      @$el.val('')
      @change()

class WSF_DYNAMIC_MULTI_CONTROL extends WSF_CONTROL

  update: (state)->
    console.log state
    if state.items? and state.render? and state.newstate? 
      @state['items'] = state.items
      for control in @controls
        if not (control?.control_name of state.newstate)
          control?.remove()
      for el in $(state.render).children()
        if @$el.children('[data-name='+$(el).data('name')+']').length == 0 
          @$el.append(el)
      for k,v of state.newstate
        if not (k of @fullstate.controls)
          @fullstate.controls[k] = v
      @load_subcontrols()
      for control in @controls
        control?.initialize() 
    return

class WSF_PASSWORD_CONTROL extends   WSF_INPUT_CONTROL   

class WSF_NAVLIST_ITEM_CONTROL extends WSF_BUTTON_CONTROL
  update: (state) ->
    super
    if state.active?
      @state['active'] = state.active
      if state.active
        @$el.addClass("active")
      else
        @$el.removeClass("active")


class WSF_TEXTAREA_CONTROL extends WSF_INPUT_CONTROL

class WSF_CODEVIEW_CONTROL extends WSF_INPUT_CONTROL
  constructor:()->
    super
    #load codemirror and then eiffel syntax
    @initialize = lazy_load ['/assets/codemirror/codemirror.js','/assets/codemirror/codemirror.css','/assets/codemirror/estudio.css'],
                            (lazy_load ['/assets/codemirror/eiffel.js'], @attach_events, @), 
                            @

  attach_events: () ->
    super 
    @editor = CodeMirror.fromTextArea(@$el[0], {
        mode: "eiffel",
        tabMode: "indent",
        indentUnit: 4,
        lineNumbers: true,
        theme:'estudio'
      })
    @editor.setSize("100%",700)
  remove: ()->
    @editor.toTextArea()
    super

class WSF_AUTOCOMPLETE_CONTROL extends WSF_INPUT_CONTROL
  requirements: ['assets/typeahead.min.js']

  attach_events: () ->
    super
    self = @
    console.log @$el
    @$el.typeahead({
      name: @control_name+Math.random()
      template: @state['template']
      engine: Mini
      remote:
        url:""
        replace: (url, uriEncodedQuery) ->
            self.state['text'] = self.$el.val()
            '?' + $.param
                      control_name: self.control_name
                      event: 'autocomplete'
                      states: JSON.stringify(self.get_context_state())
        filter: (parsedResponse) ->
            return parseSuggestions(parsedResponse)
        fn: ()->
          self.trigger_callback(self.control_name, 'autocomplete')
    })

    @$el.on 'typeahead:closed',()->
        self.change() 

    @$el.on 'typeahead:blured',()->
        self.change() 

class WSF_DATE_PICKER_CONTROL extends WSF_INPUT_CONTROL
  requirements: ['assets/datepicker.css', 'assets/bootstrap-datepicker.js']

  attach_events: () ->
  	super
  	self = @
  	console.log @$el
  	@$el.datepicker({
      format: 'dd-mm-yyyy'
    })

class WSF_CHECKBOX_CONTROL extends WSF_CONTROL
  attach_events: ()->
    super
    self = @
    @checked_value = @state['checked_value']
    @$el.change ()->
      self.change()

  change: ()->
    #update local state
    @state['checked'] = @$el.is(':checked')
    if @state['callback_change']
      @trigger_callback(@control_name, 'change')
    @trigger('change')

  value:()->
    return @$el.is(':checked')

  update: (state) ->
    if state.text?
      @state['checked'] = state.checked
      @$el.prop('checked',state.checked)

class WSF_FORM_ELEMENT_CONTROL extends WSF_CONTROL
  attach_events: ()->
    super
    self = @
    @value_control = @controls[0]
    if @value_control?
      #subscribe to change event on value_control
      @value_control.on('change',@change,@)
    @serverside_validator = false
    #Initialize validators
    @validators = []
    for validator in @state['validators']
      try
        validatorclass = eval(validator.name)
        @validators.push new validatorclass(@,validator)
      catch e
        #Use serverside validator if no js implementation
        @serverside_validator = true
    return

  #value_control changed run validators
  change: ()->
    for validator in @validators
      if not validator.validate()
        @showerror(validator.error)
        return
    @showerror("")
    #If there is validator which is not implemented in js ask server to validate
    if @serverside_validator
      @trigger_callback(@control_name, 'validate')
    return

  showerror: (message)->
    @$el.removeClass("has-error")
    @$el.find(".validation").remove()
    if message.length>0
      @$el.addClass("has-error")
      errordiv = $("<div />").addClass('help-block').addClass('validation').text(message)
      @$el.children("div").append(errordiv)

  update: (state) ->
    if state.error?
      @showerror(state.error)

  value: ()->
    @value_control.value()

class WSF_HTML_CONTROL extends WSF_CONTROL

  value:()->
    return @$el.html()

  update: (state) ->
    if state.html?
      @state['html'] = state.html
      @$el.html(state.html)

class WSF_CHECKBOX_LIST_CONTROL extends WSF_CONTROL

  attach_events: ()->
    super
    #Listen to events of subelements and forward them
    for control in @controls
      control.on('change',@change,@)
    return
 
  change:()->
    @trigger("change")

  value:()->
    result = []
    for subc in @controls
      if subc.value()
        result.push(subc.checked_value)
    return result

class WSF_PROGRESS_CONTROL extends WSF_CONTROL

  attach_events:() ->
    super
    self = @
    runfetch= ()->
            self.fetch()
    @int=setInterval(runfetch, 5000)

  fetch: ()->
    @trigger_callback(@control_name, 'progress_fetch')
      

  update: (state)->
    if state.progress?
      @state['progress'] = state.progress
      @$el.children('.progress-bar').attr('aria-valuenow', state.progress).width(state.progress + '%')

  remove: ()->
    clearInterval(@int)
    super

class WSF_PAGINATION_CONTROL extends WSF_CONTROL

  attach_events: ()->
    self = @
    @$el.on 'click', 'a', (e)->
      e.preventDefault()
      self.click(e)

  click: (e)->
    nr = $(e.target).data('nr')
    if nr == "next"
      @trigger_callback(@control_name, "next")
    else if nr == "prev"
      @trigger_callback(@control_name, "prev")
    else
      @trigger_callback(@control_name, "goto", nr)

  update: (state) ->
    if state._html?
      @$el.html($(state._html).html())

class WSF_GRID_CONTROL extends WSF_CONTROL
  attach_events: ()->
    super
    self = @

  update: (state) ->
    if state.datasource?
      @state['datasource'] = state.datasource
    if state._body?
      @$el.find('tbody').html(state._body)

class WSF_REPEATER_CONTROL extends WSF_CONTROL
  attach_events: ()->
    super
    self = @

  update: (state) ->
    if state.datasource?
      @state['datasource'] = state.datasource
    if state._body?
      @$el.find('.repeater_content').html(state._body)
      console.log state._body

 




#### actions
redirect = (action) ->
    document.location.href = action.url

show_alert = (action)->
    alert(action.message)

start_modal = lazy_load ['/assets/bootstrap.min.js'], (action)->
  cssclass = ""
  if action.type == "start_modal_big"
    cssclass = " big"
  modal = $("""<div class="modal fade">
  <div class="modal-dialog#{cssclass}">
    <div class="modal-content">
      <div class="modal-header">
        <button type="button" class="close" data-dismiss="modal" aria-hidden="true">&times;</button>
        <h4 class="modal-title">#{action.title}</h4>
      </div>
      <div class="modal-body">
      
      </div>
    </div>
  </div>
</div>""")
  modal.appendTo('body')
  modal.modal('show')
  modal.on 'hidden.bs.modal', ()->
    $(modal.find('[data-name]').get().reverse()).each (i,value)->
      $(value).data('control').remove()
      return
    return
  $.get( action.url, { ajax: 1 } )
    .done (data) ->
      modal.find('.modal-body').append(data)

start_modal_big = start_modal
