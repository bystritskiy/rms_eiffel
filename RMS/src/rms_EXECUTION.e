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
			create db.make
--			db.display_table ("USERS")
--			db.display_table ("REPORTS")
--			db.display_table ("REPORTS_CONTENT")
			print (get_file_name + " FILE%N")
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
			elseif request.path_info.has_substring (".html") then
				if is_admin_page then
						--TODO: admin
						print("IM admin1%N")
					do_admin_doings()
					create {WSF_FILE_RESPONSE} mesg.make_with_content_type ({HTTP_MIME_TYPES}.text_html, "web\" + get_file_name)
				else
					print("IM prof%N")
					if analyse_request then
						create {WSF_FILE_RESPONSE} mesg.make_with_content_type ({HTTP_MIME_TYPES}.text_html, "web\" + get_file_name)
					else
						create {WSF_FILE_RESPONSE} mesg.make_with_content_type ({HTTP_MIME_TYPES}.text_html, "web\authorisation.html")
					end
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

	do_admin_doings()
	local
		tmp:STRING
		ids: ARRAY[INTEGER_32]
		index:INTEGER
		do
			print("IM admin. do admin_doings%N")
			tmp:=""
			if request.path_info.has_substring ("admin.html") then
				response.add_cookie (create {WSF_COOKIE}.make ("admin_data", db.get_all_table ("USERS")))
				print("IM admin. add cookie info%N")
				print(db.get_all_table("USERS"))
			end
			if attached {WSF_STRING} request.query_parameter ("section") as s then
				if s.same_string ("admin_add") then
					--add new user in database
					if attached {WSF_STRING} request.query_parameter ("name") as name and then attached {WSF_STRING} request.query_parameter ("lab") as lab then
						print("IM admin. add new user%N")
						db.add_user (name.string_representation, lab.string_representation)
					end
				elseif s.same_string ("admin") then
					--display all user reports
					across request.query_parameters as q
					loop
						if q.item.name.has_substring ("user_id") then
							tmp := q.item.name
							tmp.replace_substring_all ("user_id", "")
							response.add_cookie (create {WSF_COOKIE}.make ("admin_data", db.get_all_user_reports (tmp.to_integer)))
							print("IM admin. add cookie info about reports%N")
--							print(db.get_all_user_reports (user_id.integer_value) + "%N")
						end
--					params.append ("%T"+ q.item.name + "=" + q.item.string_representation +"%N")
					end
				elseif s.same_string ("admin_report") then
					print("IM admin. show all content of report%N")
					across request.query_parameters as q
					loop
						if q.item.name.has_substring ("report_id") then
							tmp := q.item.name
							tmp.replace_substring_all ("report_id", "")
							print(tmp + "%N")
							response.add_cookie (create {WSF_COOKIE}.make ("admin_data", db.get_report (tmp.to_integer)))
						end
--					params.append ("%T"+ q.item.name + "=" + q.item.string_representation +"%N")
					end
					print("IM admin. add cookie report%N")
				else
					print("IM admin. WARINING!!!!!!!!!!!!!!! IM do NOTHING!!!!!!!!!!!!!!!!%N")
				end
			else
				print("IM admin. WARINING!!!!!!!!!!!!!!! IM do NOTHING BECAUSE NO SECTION!!!!!!!!!!!!!!!!%N")
			end
			print("IM admin. I end my doings%N")
		end

	is_admin_page: BOOLEAN
	do
		Result := request.path_info.has_substring ("/admin")
	end

	analyse_request: BOOLEAN
		local
			tmp:STRING
			section: STRING
			user_id: INTEGER
			report_id :INTEGER
		do
			Result := true

			if attached {WSF_STRING} request.query_parameter ("section") as s then
				section := s.string_representation
				print ("Section=" + section + "%N")
				if section.same_string ("authorisation") then
					if attached {WSF_STRING} request.query_parameter ("name") as name then
						user_id := db.get_user_id_by_name (name.string_representation)
						if user_id > 0 then
							response.add_cookie (create {WSF_COOKIE}.make ("user_id", user_id.out))
							tmp:=name.string_representation
							tmp.replace_substring_all (" ", "+")
							response.add_cookie (create {WSF_COOKIE}.make ("user_name", tmp))
							tmp:=db.get_lab_name_by_id(user_id)
							tmp.replace_substring_all (" ", "+")
							response.add_cookie (create {WSF_COOKIE}.make ("lab_name", tmp))
							print("cookie added^ lab name + user name")
						else
								--no user in database
								print("!!!No user in database%N")
							Result := false
						end
					else
							--no parameter "name"
							print("!!!No parameter name%N")
						Result := false
					end
				else
					--check cookie -> user_id
					if attached {WSF_STRING} request.cookie ("user_id") as u_id then
						user_id := u_id.integer_value
						print("COOKIE USER_ID=" + user_id.out + "%N")
						--check user id in database
						if db.check_user_by_id (user_id) then
							if section.same_string ("report") then
								if attached {WSF_STRING} request.query_parameter ("report_start") as start and then attached {WSF_STRING} request.query_parameter ("report_end") as rep_end then
									report_id := db.get_report_id_or_create (user_id, start.string_representation, rep_end.string_representation)
									response.add_cookie (create {WSF_COOKIE}.make ("report_id", report_id.out))
									response.add_cookie (create {WSF_COOKIE}.make ("report_start", start.string_representation))
									response.add_cookie (create {WSF_COOKIE}.make ("report_end", rep_end.string_representation))
									print("%N%Ncookie added report_id=" + report_id.out + " also report_start + report_end%N%N")
								else
									--have not needed parameters
									Result:=false
								end
							else
								if attached {WSF_STRING} request.cookie ("report_id") as r_id then
									report_id:=r_id.integer_value
									print("COOKIE REPORT_ID=" + report_id.out + "%N")
									if  section.same_string ("teaching") or section.same_string ("education") then
										if NOT manage_teaching(report_id) then
											print("Smthing bad while add teaching in DB%N")
										end
									elseif section.same_string ("research") then
										if NOT manage_research(report_id) then
											print("Smthing bad while add research in DB%N")
										end
									elseif section.same_string ("technologies") then
--										manage_teaching(report_id)
									elseif section.same_string ("awards") then
--										manage_teaching(report_id)
--									elseif section.same_string ("general") then
									elseif section.same_string ("external") then
--										manage_teaching(report_id)
									elseif section.same_string ("other") then
--										manage_teaching(report_id)
									else
										Result:=false
										print ("%N%NALL BAD WITH request CHECKING%N%N")
									end
								else
									--no report_id
									print("!!!No report_id in cookies%N")
									Result:=false
								end

							end
						else
						--no such user_id in database
							print("!!!User not found in DB%N")
							Result:=false
						end
					else
					--no cookie -> user_id
					print("!!!No user_id in cookies%N")
						Result:=false
					end
				end
			else
				print("no section parameter%N")
			end
		end

--

manage_research(report_id:INTEGER):BOOLEAN
		require
			report_id > 0
			local
				grants,projects,collaborations,conference,journal:STRING
			do
				Result:=true
				grants := ""
				projects := ""
				collaborations := ""
				conference := ""
				journal := ""
				--grants_note_1=1&research_note_1=2&partnership_note_1=3&publ_note_1=4&publication_note_1=5&submit=Send
				across
					request.query_parameters as q
				loop
					if q.item.name.has_substring ("grants_note") then
						grants.append (q.item.string_representation + "|")
					elseif q.item.name.has_substring ("research_note") then
						projects.append (q.item.string_representation + "|")
					elseif q.item.name.has_substring ("partnership_note") then
						collaborations.append (q.item.string_representation + "|")
					elseif q.item.name.has_substring ("publ_note") then
						conference.append (q.item.string_representation + "|")
					elseif q.item.name.has_substring ("publication_note") then
						journal.append (q.item.string_representation + "|")
					end
--					params.append ("%T"+ q.item.name + "=" + q.item.string_representation +"%N")
				end
				db.add_teaching (report_id, grants,projects,collaborations,conference,journal)
			end

--

		manage_teaching(report_id:INTEGER):BOOLEAN
		require
			report_id > 0
			local
				courses, examinations, supervised, reports, phd_theses:STRING
			do
				Result:=true
				courses := ""
				examinations := ""
				supervised := ""
				reports := ""
				phd_theses := ""
				--courses_note_1=1&exams_note_1=2&dip_note_1=3&stud_note_1=4&dipl_note_1=5&submit=Send
			--http://localhost:8080/index.html?section=teaching&courses_note1=1&
			--courses_note2=2&courses_note3=3&exams_note1=4&exams_note2=5&exams_note3=6&
			--dip_note1=7&dip_note2=8&dip_note3=9&stud_note2=10&stud_note3=11&stud_note4=12&
			--dipl_note1=13&dipl_note2=14&dipl_note3=15&submit=Send
				across
					request.query_parameters as q
				loop
					if q.item.name.has_substring ("courses_note") then
						courses.append (q.item.string_representation + "|")
					elseif q.item.name.has_substring ("exams_note") then
						examinations.append (q.item.string_representation + "|")
					elseif q.item.name.has_substring ("dip_note") then
						supervised.append (q.item.string_representation + "|")
					elseif q.item.name.has_substring ("stud_note") then
						reports.append (q.item.string_representation + "|")
					elseif q.item.name.has_substring ("dipl_note") then
						phd_theses.append (q.item.string_representation + "|")
					end
--					params.append ("%T"+ q.item.name + "=" + q.item.string_representation +"%N")
				end
				db.add_teaching (report_id, courses, examinations, supervised, reports, phd_theses)
			end

feature {NONE}

	db: DATABASE

	get_file_name: STRING
		do
			Result := request.path_info.as_lower.split ('/').last
		end

end
