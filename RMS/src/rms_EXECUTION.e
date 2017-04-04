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
				--localhost:8080/
			if request.path_info.is_case_insensitive_equal_general ("/") then
				create {WSF_FILE_RESPONSE} mesg.make_with_content_type ({HTTP_MIME_TYPES}.text_html, "web\authorisation.html")
				--css files
			elseif request.path_info.ends_with (".css") then
				create {WSF_FILE_RESPONSE} mesg.make_with_content_type ({HTTP_MIME_TYPES}.text_css, "web\css\" + get_file_name)
				--js files
			elseif request.path_info.ends_with (".js") then
				create {WSF_FILE_RESPONSE} mesg.make_with_content_type ({HTTP_MIME_TYPES}.text_css, "web\js\" + get_file_name)
				--html web pages
			elseif request.path_info.ends_with (".html") then
				if is_admin_page then
				--TODO: admin		
					create {WSF_FILE_RESPONSE} mesg.make_with_content_type ({HTTP_MIME_TYPES}.text_html, "web\" + get_file_name)

				else
					analyse_request
					create {WSF_FILE_RESPONSE} mesg.make_with_content_type ({HTTP_MIME_TYPES}.text_html, "web\" + get_file_name)
				end
				--error page
			else
				create not_found.make (request)
				not_found.add_suggested_location (request.absolute_script_url (""), "Home", "Back to home page")
				mesg := not_found
			end
			--return page to client
			response.send (mesg)
		end



	is_admin_page:BOOLEAN
		--TODO: написать функцию, которая могла бы вернуть true, когда запрашивается страницы (.htlm) админа
	do
		Result:=true
	end



	analyse_request
			--фича, код которой даёт возможность получить информацию из запроса, которую потом мы отправим в БД
			--запрос для тестов
			--http://localhost:8080/index.html?section=education&courses_note1=1&courses_note2=2&courses_note3=3&exams_note1=4&exams_note2=5&exams_note3=6&dip_note1=7&dip_note2=8&dip_note3=9&stud_note2=10&stud_note3=11&stud_note4=12&dipl_note1=13&dipl_note2=14&dipl_note3=15&submit=Send
		local
			params: STRING_8
			section: STRING
		do
			create params.make (1024)
			--TODO(BORIS): check cookies
--			params.append ("Query parameters:%N")
--			across
--				request.query_parameters as q
--			loop

--				params.append ("%T"+ q.item.name + "=" + q.item.string_representation +"%N")
--			end

			if attached {WSF_STRING} request.query_parameter ("section") as s then
				section := s.string_representation
				if section.same_string ("general") then

				end
				if section.same_string ("education") then

				end
				if section.same_string ("research") then

				end
				if section.same_string ("technologies") then

				end
				if section.same_string ("awards") then

				end
				if section.same_string ("external") then

				end
				if section.same_string ("other") then

				end
			end
			print(params)
		end

		

feature {NONE}

	db:DATABASE

	get_file_name: STRING
		do
			Result := request.path_info.as_lower.split ('/').last
		end

end
