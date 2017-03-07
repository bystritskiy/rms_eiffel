note
	description: "[
		A control that represents a file upload.
	]"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	WSF_FILE_CONTROL

inherit

	WSF_VALUE_CONTROL [detachable WSF_FILE_DEFINITION]
		rename
			make as make_value_control
		end

create
	make, make_with_image_preview

feature {NONE} -- Initialization

	make
			-- Initialize
		do
			make_value_control ("input")
		end

	make_with_image_preview
			-- Initialize with image_preview set to true
		do
			make
			image_preview := True
		end

feature {WSF_PAGE_CONTROL, WSF_CONTROL} -- State management

	set_state (new_state: JSON_OBJECT)
			-- Restore text from json
		local
			id: detachable STRING_32
		do
			if
				attached {JSON_STRING} new_state.item ("file_name") as new_name and
				attached {JSON_STRING} new_state.item ("file_type") as new_type and
				attached {JSON_NUMBER} new_state.item ("file_size") as new_size
			then
				if attached {JSON_STRING} new_state.item ("file_id") as a_id then
					id := a_id.unescaped_string_32
				end
				create file.make (new_name.unescaped_string_32, new_type.unescaped_string_32, new_size.item.to_integer_32, id)
			end
			if attached {JSON_BOOLEAN} new_state.item ("disabled") as a_disabled then
				disabled := a_disabled.item
			end
			if attached {JSON_BOOLEAN} new_state.item ("image_preview") as a_image_preview then
				image_preview := a_image_preview.item
			end
		end

	state: WSF_JSON_OBJECT
			-- Return state which contains the current text and if there is an event handle attached
		do
			create Result.make
			Result.put_boolean (attached change_event, "callback_change")
			Result.put_boolean (attached upload_done_event, "callback_uploaddone")
			if attached file as f then
				Result.put_string (f.name, "file_name")
				Result.put_string (f.type, "file_type")
				Result.put_integer (f.size, "file_size")
				if attached f.id as fid then
					Result.put_string (fid, "file_id")
				else
					Result.put (Void, "file_id")
				end

			end
			Result.put_boolean (disabled, "disabled")
			Result.put_boolean (image_preview, "image_preview")
		end

feature -- Event handling

	handle_callback (cname: LIST [READABLE_STRING_GENERAL]; event: READABLE_STRING_GENERAL; event_parameter: detachable ANY)
		local
			f_name: detachable STRING_32
			f_type: detachable STRING_32
			f_size: detachable INTEGER
			f_id: detachable STRING_32
		do
			if control_name.same_string_general (cname.first) then
				if attached change_event as cevent and event.same_string ("change") then
					cevent.call (Void)
				elseif attached upload_done_event as udevent and event.same_string ("uploaddone") then
					udevent.call (Void)
				elseif event.same_string ("uploadfile") and attached {ITERABLE [WSF_UPLOADED_FILE]} event_parameter as files then
					if attached file as f then
						if attached upload_function as ufunction then
							f.set_id (ufunction.item ([files]))
						end
						f_name := f.name
						f_type := f.type
						f_size := f.size
						f_id := f.id

						state_changes.replace_with_string (f_name, "file_name")
						state_changes.replace_with_string (f_type, "file_type")
						state_changes.replace_with_integer (f_size, "file_size")
					else
						state_changes.replace (Void, "file_name")
						state_changes.replace (Void, "file_type")
						state_changes.replace (Void, "file_size")
					end
					if f_id /= Void then
						state_changes.replace_with_string (f_id, "file_id")
					else
						state_changes.replace (Void, "file_id")
					end

				end
			end
		end

feature -- Upload

	start_upload
			-- Add start upload command to action list which then executes the javascript function to start upload on client side
		local
			upload: WSF_JSON_OBJECT
		do
			create upload.make
			upload.put_string ("start_upload", "type")
			actions.add (upload)
		end

feature -- Implementation

	value: detachable WSF_FILE_DEFINITION
		do
			Result := file
		end

	render: STRING_32
		local
			attr: STRING_32
		do
			attr := "type=%"file%"  "
			if attached attributes as a then
				attr.append (a)
			end
			if disabled then
				attr.append ("disabled=%"disabled%" ")
			end
			Result := render_tag_with_tagname ("div", render_tag ("", attr), Void, "")
		end

feature -- Change

	set_change_event (e: attached like change_event)
			-- Set text change event handle
		do
			change_event := e
		ensure
			change_event_set: change_event = e
		end

	set_upload_done_event (e: attached like upload_done_event)
			-- Set text change event handle
		do
			upload_done_event := e
		ensure
			upload_done_event_set: upload_done_event = e
		end

	set_upload_function (e: attached like upload_function)
			-- Set button click event handle
		do
			upload_function := e
		ensure
			upload_function_set: upload_function = e
		end

	set_disabled (b: BOOLEAN)
			-- Set the disabled state of this file control
		do
			if disabled /= b then
				disabled := b
				state_changes.replace_with_boolean (disabled, "disabled")
			end
		ensure
			disabled_set: disabled = b
			state_changes_registered: old disabled /= disabled implies state_changes.has_key ("disabled")
		end

	set_value (v: detachable WSF_FILE_DEFINITION)
			-- Set the file definition of this file control
		do
			file := v
		ensure then
			file_set: file = v
		end

	set_image_preview (b: BOOLEAN)
			-- Set if the image should be previewed in the control
		do
			if image_preview /= b then
				image_preview := b
				state_changes.replace_with_boolean (image_preview, "image_preview")
			end
		ensure
			image_preview_set: image_preview = b
			state_changes_registered: old image_preview /= image_preview implies state_changes.has_key ("image_preview")
		end

feature -- Properties

	disabled: BOOLEAN
			-- Defines if the a file is selectable and if a file can be removed once it is uploaded

	image_preview: BOOLEAN
			-- Preview uploaded image

	file: detachable WSF_FILE_DEFINITION
			-- Text to be displayed

	change_event: detachable PROCEDURE
			-- Procedure to be execued on change

	upload_done_event: detachable PROCEDURE
			-- Procedure to be execued when upload was successful

	upload_function: detachable FUNCTION [ITERABLE [WSF_UPLOADED_FILE], detachable STRING_32]
			-- Store uploaded file and return server side file id

;note
	copyright: "2011-2014, Yassin Hassan, Severin Munger, Jocelyn Fiat, Eiffel Software and others"
	license: "Eiffel Forum License v2 (see http://www.eiffel.com/licensing/forum.txt)"
	source: "[
			Eiffel Software
			5949 Hollister Ave., Goleta, CA 93117 USA
			Telephone 805-685-1006, Fax 805-685-6869
			Website http://www.eiffel.com
			Customer support http://support.eiffel.com
		]"
end
