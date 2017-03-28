note
	description: "DB_PROJECT application root class"
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION

inherit

	ARGUMENTS

create
	make

feature {NONE} -- Initialization

	db: SQLITE_DATABASE

	db_path: STRING

	db_query_statement: detachable SQLITE_QUERY_STATEMENT
			-- an sql query statement for the db

	db_insert_statement: detachable SQLITE_INSERT_STATEMENT
			-- an sql insert statement for the db

	db_modify_statement: detachable SQLITE_MODIFY_STATEMENT
			-- sql modification statement, e.g. UPDATE

	make
			-- Run application.
		local
				--	val: TUPLE [success: BOOLEAN; id: STRING]
				--	val2, val3, val4: TUPLE [name: STRING; id, salary: INTEGER]
			test_name: STRING
			test_user_id: INTEGER
			test_report_id: INTEGER
			command: INTEGER
		do
			db_path := "rms.db"
			test_name := "Bertran"
			init_db
			print ("%N1 zaregat' usera%N")
			print ("2 authorisation%N")
			print ("3 add info%N")
			print ("4 display tables")
			io.read_integer
			command := io.last_integer
			print ("%N")
			if command = 1 then
				print ("Suppose your name is 'Bertran'")
				add_user (test_name, "Eiffel corporation")
				display_table ("USERS")
				test_user_id := get_user_id_by_name (test_name)
				test_report_id := add_report (test_user_id, create {DATE}.make (2016, 3, 18), create {DATE}.make_now)
				display_table ("REPORTS")
				add_teaching (test_report_id, "High way to Eiffel", "smthing", "freestyler", "racamacafon", "selecto")
				display_table ("REPORTS_CONTENT")
			end
			if command = 2 then
				print ("enter your name >> ")
				io.read_line
				print ("%N")
				print ("your id: " + get_user_id_by_name (io.last_string).out + "%N")
			end
			if command = 3 then
			end
			if command = 4 then
				display_table ("USERS")
				display_table ("REPORTS")
				display_table ("REPORTS_CONTENT")
			end

				--			add_user (test_name, "Eiffel corporation")
				--			display_table ("USERS")
				--			test_user_id := get_user_id_by_name (test_name)
				--			test_report_id := add_report (test_user_id, create {DATE}.make (2016, 3, 18), create {DATE}.make_now)
				--			display_table("REPORTS")
				--			add_teaching (test_report_id, "High way to Eiffel", "smthing", "freestyler", "racamacafon", "selecto")
				--			display_table ("REPORTS_CONTENT")
		end

	init_db
		do
			if (create {RAW_FILE}.make_with_path (create {PATH}.make_from_string (db_path))).exists then
				print ("Connect to exist table")
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

	add_user (name, unit: STRING)
			-- table users -- admin function -- add user in database
		local
			query: STRING
		do
			query := "INSERT INTO USERS( NAME, UNIT) values('" + name + "','" + unit + "');"
			invoke_insert_statement (query)
		end

	add_report (user_id: INTEGER; report_start, report_end: DATE): INTEGER
			-- table reports + report_content-- user function -- add report in database
		local
			query: STRING
			report_id: INTEGER
		do
			query := "INSERT INTO REPORTS( USER_ID, REPORT_START, REPORT_END) values('" + user_id.out + "','" + report_start.out + "', '" + report_end.out + "');"
			invoke_insert_statement (query)
			report_id := get_report_id (user_id, report_start, report_end)
			Result := report_id
			if report_id <= 0 then
				print ("ALERT!!!! DANGER ERROR IN DATABASE !!!! NEED FIX")
			end
			query := "INSERT INTO REPORTS_CONTENT( REPORT_ID) values('" + report_id.out + "');"
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

	add_reaserch
			-- section "REASEARCH"
		local
			query: STRING
		do
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

	get_report_id (user_id: INTEGER; report_start, report_end: DATE): INTEGER
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			query: STRING
			a_row: SQLITE_RESULT_ROW
			i: NATURAL
		do
			create db.make_open_read_write (db_path)
			i := 1
			Result := -100500
			query := "SELECT REPORT_ID FROM REPORTS WHERE USER_ID='" + user_id.out + "' AND REPORT_START='" + report_start.out + "' AND REPORT_END='" + report_end.out + "';"
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

	get_user_reports (user_id: INTEGER): ARRAY [INTEGER]
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			query: STRING
			a_row: SQLITE_RESULT_ROW
			i: NATURAL
		do
			create Result.make_empty
			create db.make_open_read_write (db_path)
			query := "SELECT REPORT_ID FROM REPORTS WHERE USER_ID ='" + user_id.out + "';"
			print("%N" + query)
			create db_query_statement.make (query, db)

			--
			l_query_result_cursor := db_query_statement.execute_new
			if l_query_result_cursor.after then
				print ("Error while quering table user")
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
							--						create Result.make_filled ("", i.as_integer_32, a_row.count.as_integer_32)
					until
						i > a_row.count
					loop
						print ("Column Name: ")
						print (a_row.column_name (i))
						io.new_line
						if a_row.value (i) /= Void then
							print (a_row.value (i))
								--							print("index>" + i.out)
								--							Result.put (a_row.value (i).out, i.as_integer_32)
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
			--

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
				print ("Error while quering table user")
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
							--						create Result.make_filled ("", i.as_integer_32, a_row.count.as_integer_32)
					until
						i > a_row.count
					loop
						print ("Column Name: ")
						print (a_row.column_name (i))
						io.new_line
						if a_row.value (i) /= Void then
							print (a_row.value (i))
								--							print("index>" + i.out)
								--							Result.put (a_row.value (i).out, i.as_integer_32)
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

		--	update_specific_data (id: INTEGER; new_address: STRING): BOOLEAN
		--			-- updates db (example)
		--		do
		--			create db.make_open_read_write (db_path)
		--			create db_modify_statement.make ("Update REPORTS SET ADDRESS='" + new_address + "' WHERE id=" + id.out + ";", db)
		--			db_modify_statement.execute
		--			Result := not db_modify_statement.has_error
		--			db.close
		--		end
		--	insert_specific_data (id: INTEGER; name: STRING): TUPLE [success: BOOLEAN; id: STRING]
		--			-- inserts specific data to table COMPANY (example)
		--		local
		--			query: STRING
		--		do
		--			create db.make_open_read_write (db_path)
		--			query := "INSERT INTO REPORTS (ID, NAME, AGE, ADDRESS, SALARY) values(" + id.out + ",'" + name + "', 44, 'THIS', 10);"
		--			create Result.default_create
		--			create db_insert_statement.make (query, db)
		--			db_insert_statement.execute
		--			Result.success := true
		--			Result.id := db_insert_statement.last_row_id.out
		--			if db_insert_statement.has_error then
		--				print ("Error while inserting into table REPORTS")
		--				Result.success := false
		--				Result.id := "-1"
		--			end
		--		end+

end
