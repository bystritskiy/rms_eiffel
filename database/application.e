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
		do
			db_path := "rms.db"
			init_db
			add_general ("Bertran", "Report header", create {DATE}.make (2016, 3, 18), create {DATE}.make_now)
			add_teaching (2, "High way to Eiffel", "smthing", "freestyler", "racamacafon", "selecto")
			across
				get_id_salary_user ("Bertran") as str
			loop
				if (FALSE AND str /= void) then
					print (str)
					print (" | ")
				end
			end
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
			query := "CREATE TABLE REPORTS(ID INTEGER PRIMARY KEY, NAME TEXT, HEAD TEXT, START TEXT, END TEXT" +
			", COURSES TEXT, EXAMINATIONS TEXT, " +
			 "SUPERVISED     TEXT, REPORTS TEXT, PHD_THESES TEXT, GRANTS TEXT, PROJECTS TEXT, COLLABORATIONS TEXT, CONFERENCE TEXT, " +
			  "JOURNAL TEXT, PATENTS TEXT, LICENSING TEXT, AWARDS TEXT, MEMBERSHIP TEXT, PRIZES TEXT, INDUSTRY TEXT, OTHER TEXT" +
			  ");"

				--			query := "CREATE TABLE COMPANY (ID INT PRIMARY KEY, NAME TEXT, AGE INT, ADDRESS CHAR(50), SALARY REAL);"
			create db_insert_statement.make (query, db)
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print ("Error while inserting into table REPORTS")
			end
			db.close
		end

	add_general (name, head: STRING; start, rep_end: DATE)
			-- section "GENERAL"
		local
			query: STRING
		do
			query := "INSERT INTO REPORTS ( NAME, HEAD, START, END) values('" + name + "','" + head + "', '" + start.out + "', '" + rep_end.out + "');"
			db.open_read_write
			print ("%N" + query)
			create db_insert_statement.make (query, db)
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print ("Error while inserting into table REPORTS")
			end
			db.close
		end

	add_teaching(id:INTEGER; courses, examinations, supervised, reports, phd_theses:STRING)
			-- section "TEACHING"
		local
			query: STRING
		do
			query := "UPDATE REPORTS SET COURSES = '" + courses + "', EXAMINATIONS = '" + examinations + "', SUPERVISED = '" + supervised +
			"', REPORTS = '" + reports + "', PHD_THESES = '" + phd_theses + "' WHERE ID = " + id.out + " ;"
			db.open_read_write
			print ("%N" + query)
			create db_modify_statement.make (query, db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print ("Error while updating into table REPORTS section 'teaching'")
			end
			db.close
		end

	add_reasearch(id:INTEGER; grants, research_outside, publication, journal_publication:STRING)
			-- section "REASEARCH"
		local
			query: STRING
		do
			query := "UPDATE REPORTS SET RESEARCH = '" + grants + "', RESEARCH OUTSIDE OF THE GRANT: = '" + research_outside + "', COOPERATION = '" + cooperation +
			"', PUBLICATION = '" + publication + "', JOURNAL PUBLICATION = '" + journal_publication + "' WHERE ID = " + id.out + " ;"
			db.open_read_write
			print ("%N" + query)
			create db_modify_statement.make (query, db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print ("Error while updating into table REPORTS section 'reasearch'")
			end
			db.close
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



	get_id_salary_user (user: STRING): ARRAY [STRING_8]
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			i: NATURAL
			a_row: SQLITE_RESULT_ROW
		do
			create db.make_open_read_write (db_path)
			create Result.make_empty
			create db_query_statement.make ("SELECT * FROM REPORTS WHERE NAME='" + user + "';", db)
			l_query_result_cursor := db_query_statement.execute_new
			if l_query_result_cursor.after then
				print ("Error while quering table user")
				Result := Void
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
						create Result.make_filled ("", i.as_integer_32, a_row.count.as_integer_32)
					until
						i > a_row.count
					loop
						print ("Column Name: ")
						print (a_row.column_name (i))
						io.new_line
						if a_row.value (i) /= Void then
							print (a_row.value (i))
							Result.put (a_row.value (i).out, i.as_integer_32)
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
