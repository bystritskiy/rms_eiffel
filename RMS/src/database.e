note
	description: "Summary description for {DATABASE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DATABASE

inherit

	ARGUMENTS

create
	make

feature -- Initialization

	make
			-- Run application.
		local
				--	val: TUPLE [success: BOOLEAN; id: STRING]
				--	val2, val3, val4: TUPLE [name: STRING; id, salary: INTEGER]
			test_name: STRING
			test_user_id: INTEGER
			test_report_id: INTEGER
			command: INTEGER
			tmp: INTEGER
		do
			db_path := "rms.db"
			init_db
		end

	add_user (name, unit: STRING)
			-- table users -- admin function -- add user in database
		local
			query: STRING
		do
			query := "INSERT INTO USERS( NAME, UNIT) values('" + name + "','" + unit + "');"
			invoke_insert_statement (query)
		end

	add_teaching (report_id: INTEGER; courses, examinations, supervised, reports, phd_theses: STRING)
			-- section "TEACHING"
		local
			query: STRING
		do
			query := "UPDATE REPORTS_CONTENT SET COURSES = '" + courses + "', EXAMINATIONS = '" + examinations + "', SUPERVISED = '" + supervised + "', REPORTS = '" + reports + "', PHD_THESES = '" + phd_theses + "' WHERE REPORT_ID = " + report_id.out + " ;"
			invoke_update_statement (query)
		end

	add_reaserch (report_id: INTEGER; grants, projects, collaborations, conference, journal: STRING)
			--section "REASEARCH"
			--GRANTS TEXT, PROJECTS TEXT, COLLABORATIONS TEXT, CONFERENCE TEXT, " + "JOURNAL TEXT
		local
			query: STRING
		do
			query := "UPDATE REPORTS_CONTENT SET GRANTS = '" + grants + "', PROJECTS = '" + projects + "', COLLABORATIONS = '" + collaborations + "', CONFERENCE = '" + conference + "', JOURNAL = '" + journal + "' WHERE REPORT_ID = " + report_id.out + " ;"
			invoke_update_statement (query)
			print(query)
		end

	add_technology
			-- section "TECHNOLOGY TRANSFER"
		local
			query: STRING
		do
		end

	add_distinctions
			-- section "DISTINCTIONS"
		local
			query: STRING
		do
		end

	add_outside
			-- section "OUTSIDE ACTIVITIES"
		local
			query: STRING
		do
		end

	add_other
			-- section "OTHER INFORMAITON"
		local
			query: STRING
		do
		end

	get_report_id_or_create (user_id: INTEGER; report_start, report_end: STRING): INTEGER
			-- table reports + report_content-- user function -- add report in database
		local
			query: STRING
			report_id: INTEGER
		do
			report_id := get_report_id (user_id, report_start, report_end)
			if report_id <= 0 then
				query := "INSERT INTO REPORTS( USER_ID, REPORT_START, REPORT_END) values('" + user_id.out + "','" + report_start + "', '" + report_end + "');"
				invoke_insert_statement (query)
				report_id := get_report_id (user_id, report_start, report_end)
				Result := report_id
				if report_id <= 0 then
					print ("ALERT!!!! DANGER ERROR IN DATABASE !!!! NEED FIX")
				end
				query := "INSERT INTO REPORTS_CONTENT( REPORT_ID) values('" + report_id.out + "');"
				invoke_insert_statement (query)
			else
				Result := report_id
			end
		end

	get_user_reports (user_id: INTEGER): ARRAY [INTEGER]
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			query: STRING
			a_row: SQLITE_RESULT_ROW
			i: NATURAL
			index: INTEGER
		do
			create Result.make_empty
			create db.make_open_read_write (db_path)
			query := "SELECT REPORT_ID FROM REPORTS WHERE USER_ID ='" + user_id.out + "';"
			print ("%N" + query)
			create db_query_statement.make (query, db)
			l_query_result_cursor := db_query_statement.execute_new
			if l_query_result_cursor.after then
				print ("Error while quering table reports")
			else
					-- example of iterating
				from
					l_query_result_cursor.start
					create Result.make_filled (-100500, 1, 1)
					i := 1
					index := 1
				until
					l_query_result_cursor.after
				loop
					Result.grow (index)
					a_row := l_query_result_cursor.item
					Result.put (a_row.integer_value (i), index)
					index := index + 1
					l_query_result_cursor.forth
				end
				l_query_result_cursor.start
			end
			db.close
		end

	get_report(report_id:INTEGER_32):STRING
	local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			query: STRING
			a_row: SQLITE_RESULT_ROW
			i: NATURAL
		do
			Result := ""
			query := "SELECT REPORT_START, REPORT_END FROM USERS WHERE REPORT_ID = '" + report_id.out + "';"
			print ("%N" + query)
			create db.make_open_read_write (db_path)
			create db_query_statement.make (query, db)
			l_query_result_cursor := db_query_statement.execute_new
			if l_query_result_cursor.after then
				print ("No searching user user")
			else
				i := 1
				a_row := l_query_result_cursor.item
				Result := a_row.string_value (i) + "_"
				i := i + 1
				Result.append (a_row.string_value (i))
			end
			db.close
		end

	get_user_id_by_name (name: STRING): INTEGER
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			query: STRING
			a_row: SQLITE_RESULT_ROW
			i: NATURAL
		do
			Result := -100500
			query := "SELECT USER_ID FROM USERS WHERE NAME= '" + name + "';"
			print ("%N" + query)
			create db.make_open_read_write (db_path)
			create db_query_statement.make (query, db)
			l_query_result_cursor := db_query_statement.execute_new
			if l_query_result_cursor.after then
				print ("No searching user user")
			else
				i := 1
				a_row := l_query_result_cursor.item
				Result := a_row.integer_value (i)
			end
			db.close
		end

	get_all_table (table_name: STRING): STRING
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			i: NATURAL
			a_row: SQLITE_RESULT_ROW
		do
			Result:=""
--			print ("%Ndisplay " + table_name + "%N")
			create db.make_open_read_write (db_path)
				--			create Result.make_empty
			create db_query_statement.make ("SELECT * FROM " + table_name + ";", db)
				--			create db_query_statement.make ("SELECT * FROM REPORTS_CONTENT WHERE REPORT_ID='" + report_id.out + "';", db)
			l_query_result_cursor := db_query_statement.execute_new
			if l_query_result_cursor.after then
				Result:="Error while quering table"
					--				Result := Void
			else
					-- example of iterating
				from
					l_query_result_cursor.start
				until
					l_query_result_cursor.after
				loop
					from
						i := 1
						a_row := l_query_result_cursor.item
							--create Result.make_filled ("", i.as_integer_32, a_row.count.as_integer_32)
					until
						i > a_row.count
					loop
--						print ("Column Name: ")
						Result.append (a_row.column_name (i) + "_") -- space

						if a_row.value (i) /= Void then
							Result.append(a_row.value (i).out + "|") -- enter
								--print("index>" + i.out)
								--Result.put (a_row.value (i).out, i.as_integer_32)
						end
--						io.new_line
						i := i + 1
					end
					l_query_result_cursor.forth
				end
				l_query_result_cursor.start
					-- TODO: fill result
					-- Result.TODO
			end
			db.close
		end

	check_user_by_id (user_id: INTEGER): BOOLEAN
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			query: STRING
			a_row: SQLITE_RESULT_ROW
			i: NATURAL
		do
			Result := false
			query := "SELECT NAME FROM USERS WHERE USER_ID= '" + user_id.out + "';"
			print ("%N" + query)
			create db.make_open_read_write (db_path)
			create db_query_statement.make (query, db)
			l_query_result_cursor := db_query_statement.execute_new
			if NOT l_query_result_cursor.after then
				i := 1
				a_row := l_query_result_cursor.item
				Result := true
			end
			db.close
		end

	display_table (table_name: STRING)
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			i: NATURAL
			a_row: SQLITE_RESULT_ROW
		do
			print ("%Ndisplay " + table_name + "%N")
			create db.make_open_read_write (db_path)
				--			create Result.make_empty
			create db_query_statement.make ("SELECT * FROM " + table_name + ";", db)
				--			create db_query_statement.make ("SELECT * FROM REPORTS_CONTENT WHERE REPORT_ID='" + report_id.out + "';", db)
			l_query_result_cursor := db_query_statement.execute_new
			if l_query_result_cursor.after then
				print ("Error while quering table")
					--				Result := Void
			else
					-- example of iterating
				from
					l_query_result_cursor.start
				until
					l_query_result_cursor.after
				loop
					from
						i := 1
						a_row := l_query_result_cursor.item
							--create Result.make_filled ("", i.as_integer_32, a_row.count.as_integer_32)
					until
						i > a_row.count
					loop
						print ("Column Name: ")
						print (a_row.column_name (i))
						io.new_line
						if a_row.value (i) /= Void then
							print (a_row.value (i))
								--print("index>" + i.out)
								--Result.put (a_row.value (i).out, i.as_integer_32)
						end
						io.new_line
						i := i + 1
					end
					io.new_line
					io.new_line
					io.new_line
					l_query_result_cursor.forth
				end
				l_query_result_cursor.start
					-- TODO: fill result
					-- Result.TODO
			end
			db.close
		end

feature {NONE}

	db: SQLITE_DATABASE

	db_path: STRING

	db_query_statement: detachable SQLITE_QUERY_STATEMENT -- an sql query statement for the db

	db_insert_statement: detachable SQLITE_INSERT_STATEMENT -- an sql insert statement for the db

	db_modify_statement: detachable SQLITE_MODIFY_STATEMENT -- sql modification statement, e.g. UPDATE

	init_db
		do
			if (create {RAW_FILE}.make_with_path (create {PATH}.make_from_string (db_path))).exists then
					--				print ("Connect to exist table%N")
				create db.make_open_read_write (db_path)
			else
				create db.make_create_read_write (db_path)
				print ("create new table")
				create_tables
			end
			db.close
		end

	create_tables
			--Create full table in database to store reports
		local
			query: STRING
		do
			create db.make_open_read_write (db_path)
				--1st table USERS
			query := "CREATE TABLE USERS(USER_ID INTEGER PRIMARY KEY, NAME TEXT, UNIT TEXT);"
			create db_insert_statement.make (query, db)
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print ("Error while inserting into table USERS")
			end
				--2nd table REPORTS
			query := "CREATE TABLE REPORTS(REPORT_ID INTEGER PRIMARY KEY, USER_ID INTEGER, REPORT_START TEXT, REPORT_END TEXT);"
			create db_insert_statement.make (query, db)
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print ("Error while inserting into table REPORTS")
			end
				--3rd table REPORTS_CONTENT
			query := "CREATE TABLE REPORTS_CONTENT(REPORT_ID INTEGER PRIMARY KEY, COURSES TEXT, EXAMINATIONS TEXT, " + "SUPERVISED     TEXT, REPORTS TEXT, PHD_THESES TEXT, GRANTS TEXT, PROJECTS TEXT, COLLABORATIONS TEXT, CONFERENCE TEXT, " + "JOURNAL TEXT, PATENTS TEXT, LICENSING TEXT, AWARDS TEXT, MEMBERSHIP TEXT, PRIZES TEXT, INDUSTRY TEXT, OTHER TEXT" + ");"
			create db_insert_statement.make (query, db)
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print ("Error while inserting into table REPORTS_CONTENT")
			end
			db.close
		end

	invoke_update_statement (query: STRING)
			--use it if UPDATE query
		do
			db.open_read_write
			query.replace_substring_all ("'", "?")
			print ("%N" + query)
			create db_modify_statement.make (query, db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print ("Error while updating into table REPORTS section 'teaching'")
			end
			db.close
		end

	invoke_insert_statement (query: STRING)
			--use it if INSERT query
		do
			db.open_read_write
			print ("%N" + query)
			create db_insert_statement.make (query, db)
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print ("!!!Error while inserting into table!!!")
			end
			print ("all good")
			db.close
		end

	get_report_id (user_id: INTEGER; report_start, report_end: STRING): INTEGER
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			query: STRING
			a_row: SQLITE_RESULT_ROW
			i: NATURAL
		do
			create db.make_open_read_write (db_path)
			i := 1
			Result := -100500
			query := "SELECT REPORT_ID FROM REPORTS WHERE USER_ID='" + user_id.out + "' AND REPORT_START='" + report_start + "' AND REPORT_END='" + report_end + "';"
			print ("%N" + query)
			create db_query_statement.make (query, db)
			l_query_result_cursor := db_query_statement.execute_new
			if l_query_result_cursor.after then
				print ("No searching user user")
				Result := -1
			else
				a_row := l_query_result_cursor.item
				Result := a_row.integer_value (i)
			end
			db.close
		end

end
