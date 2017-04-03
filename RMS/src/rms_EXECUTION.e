note
	description: "[
		application execution
	]"
	date: "$Date: 2016-10-21 09:45:18 -0800 (Fri, 21 Oct 2016) $"
	revision: "$Revision: 99331 $"

class
	RMS_EXECUTION

inherit

	WSF_EXECUTION

create
	make

feature -- Execution

	execute
			-- Use `request' to get data for the incoming http request
			-- and `response' to send response back to the client
		local
			mesg: WSF_RESPONSE_MESSAGE
			not_found: WSF_NOT_FOUND_RESPONSE
		do
			print (get_file_name + "%N")
			if request.path_info.is_case_insensitive_equal_general ("/") then
				create {WSF_FILE_RESPONSE} mesg.make_with_content_type ({HTTP_MIME_TYPES}.text_html, "web\authorisation.html")
--			elseif request.path_info.is_case_insensitive_equal_general ("/admin") then
--				TODO: вернуть страницу админа с тестовой информации (в будущем из БД) и выполнить нужные опреации
			elseif request.path_info.ends_with (".css") then
				create {WSF_FILE_RESPONSE} mesg.make_with_content_type ({HTTP_MIME_TYPES}.text_css, "web\css\" + get_file_name)
			elseif request.path_info.ends_with (".js") then
				create {WSF_FILE_RESPONSE} mesg.make_with_content_type ({HTTP_MIME_TYPES}.text_css, "web\js\" + get_file_name)
			elseif request.path_info.ends_with (".html") then
				analyse_request
				create {WSF_FILE_RESPONSE} mesg.make_with_content_type ({HTTP_MIME_TYPES}.text_html, "web\" + get_file_name)
			elseif request.path_info.is_case_insensitive_equal_general ("/authorisation") or request.path_info.is_case_insensitive_equal_general ("/index.html") then
					--TODO (Boris):CHECK NAME IN DB
				create {WSF_FILE_RESPONSE} mesg.make_html ("web\index.html")
			elseif request.path_info.is_case_insensitive_equal_general ("/education.html") then
				create {WSF_FILE_RESPONSE} mesg.make_html ("education.html")
			elseif request.path_info.is_case_insensitive_equal_general ("/research.html") then
				create {WSF_FILE_RESPONSE} mesg.make_html ("research.html")
			else
				create not_found.make (request)
				not_found.add_suggested_location (request.absolute_script_url (""), "Home", "Back to home page")
				mesg := not_found
			end
			response.send (mesg)
		end

	analyse_request
	--фича, код которой даёт возможность получить информацию из запроса, которую потом мы отправим в БД
		local
			req: WSF_REQUEST;
			l_body: STRING_8
		do
			req := request
			create l_body.make (1024)

--			l_body.append ("REQUEST_METHOD=" + req.request_method + "%N")
--			l_body.append ("REQUEST_URI=" + req.request_uri + "%N")
--			l_body.append ("PATH_INFO=" + req.path_info + "%N")
--			l_body.append ("QUERY_STRING=" + req.query_string + "%N")

			l_body.append ("Query parameters:%N")
			across
				req.query_parameters as q
			loop
				l_body.append ("%T"+ q.item.name + "=" + q.item.string_representation +"%N")
			end

			print(l_body)

		end

feature {NONE}

	get_file_name: STRING
		do
			Result := request.path_info.as_lower.split ('/').last
		end

end
