note
	description : "Objects that ..."
	author      : "$Author$"
	date        : "$Date$"
	revision    : "$Revision$"

class
	GEWF

create
	make

feature {NONE} -- Initialization

	make
			-- Initialize `Current'.
		local
			args: ARGUMENTS_32
			cfg: detachable READABLE_STRING_32
		do
			create setup.make

			create args
			if args.argument_count > 0 then
				cfg := args.argument (1)
			end
			if cfg /= Void then
				load_configuration (cfg)
			end
			execute
		end

	setup: GEWF_SETUP

feature -- Access

	config (k: READABLE_STRING_GENERAL): detachable READABLE_STRING_32
		do
			if attached {JSON_STRING} json_item (json, k) as js then
				Result := js.unescaped_string_32
			end
		end

	json_item (j: detachable JSON_VALUE; k: READABLE_STRING_GENERAL): detachable JSON_VALUE
		local
			l_keys: LIST [READABLE_STRING_GENERAL]
			v: detachable JSON_VALUE
			s: STRING_32
			js: JSON_STRING
		do
			if attached {JSON_OBJECT} j as jo then
				l_keys := k.split ('.')
				l_keys.start
				create js.make_from_string_general (l_keys.item)
				v := jo.item (js)
				l_keys.remove
				if l_keys.count > 0 then
					if v /= Void then
						create s.make (k.count)
						across
							l_keys as c
						loop
							s.append_string_general (c.item)
							s.append_character ('.')
						end
						s.remove_tail (1)
						Result := json_item (v, s)
					end
				else
					Result := v
				end
			end
		end

	load_configuration (fn: READABLE_STRING_GENERAL)
		local
			p: JSON_PARSER
			f: PLAIN_TEXT_FILE
			s: STRING
		do
			create s.make (1_024)

			create f.make_with_name (fn)
			if f.exists and then f.is_access_readable then
				f.open_read
				from
				until
					f.exhausted
				loop
					f.read_stream_thread_aware (1_024)
					s.append (f.last_string)
				end
				f.close
			end

			create p.make_with_string (s)
			p.parse_content
			json := p.parsed_json_value
			if attached config ("gewf.template_dir") as d then
				setup.set_template_dir_from_string (d)
			end
		end

	json: detachable JSON_VALUE

feature -- Execution

	execute
		local
			tpl_name: READABLE_STRING_32
			vals: STRING_TABLE [READABLE_STRING_8]
			uuid_gen: UUID_GENERATOR
		do
			if attached config ("template") as s32 then
				create vals.make (5)

				tpl_name := s32
				create uuid_gen
				vals.force (uuid_gen.generate_uuid.out, "UUID")

				if
					attached config ("application.name") as appname
				then
					vals.force (appname.to_string_8, "APPNAME")
				else
					vals.force ("application", "APPNAME")
				end

				if
					attached config ("application.root_class") as approot
				then
					vals.force (approot.to_string_8, "APP_ROOT")
				else
					vals.force ("APPLICATION", "APP_ROOT")
				end
				generate (tpl_name, vals)
			else
				io.error.put_string ("Error no template value! %N")
			end
		end

	generate (tpl: READABLE_STRING_32; vals: STRING_TABLE [READABLE_STRING_8])
		local
			gen: GEWF_GENERATOR
			p: PATH
			appname: detachable READABLE_STRING_GENERAL
		do
			p := setup.template_dir.extended (tpl)
			appname := vals.item ("APPNAME")
			if appname = Void then
				appname := "_generated"
			end
			create gen.make (p, create {PATH}.make_from_string (appname))
			gen.execute (vals)
		end

feature {NONE} -- Implementation

invariant
--	invariant_clause: True

note
	copyright: "2011-2015, Jocelyn Fiat, Javier Velilla, Olivier Ligot, Eiffel Software and others"
	license: "Eiffel Forum License v2 (see http://www.eiffel.com/licensing/forum.txt)"
	source: "[
			Eiffel Software
			5949 Hollister Ave., Goleta, CA 93117 USA
			Telephone 805-685-1006, Fax 805-685-6869
			Website http://www.eiffel.com
			Customer support http://support.eiffel.com
		]"
end
