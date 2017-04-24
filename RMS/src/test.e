note
	description: "Summary description for {TEST}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST

feature{TEST}

    db: DATABASE;

    --database tests

    connection_test: BOOLEAN
    do --returns false if it fails
    	db.add_user("ANYUSER","ANYUNIT");
    	Result := true;
    	if(db.get_user_id_by_name("ANYUSER") = -100500) then
    		Result := false;
    	end
        db.add_teaching (25, "ANYCOURCES","ANYEXAMINATIONS","ANYSUPERVISED","ANYREPORTS","ANYPHDTHESES");
        if(db.get_report(25)=void OR db.get_report(25)="") then
        	Result := false;
        end
    end

    collision_test: BOOLEAN
    local
        user_id:INTEGER;
    do
    	db.add_user ("ANYNAME", "ANYUNIT")
    	db.add_user ("ANYNAME", "ANOTHERUNIT")
    	user_id := db.get_user_id_by_name ("ANYNAME")
    	Result := (db.get_lab_name_by_id (user_id) = "ANOTHERUNIT")
    end

    protect_test --feature should print only user id, not unit or anything else
    local
    	user_id: INTEGER
    	user_name: STRING
    do
    	db.add_user ("SELECT UNIT FROM USERS WHERE USER_ID = '", "SELECT UNIT FROM USERS WHERE USER_ID = '")
    	user_id := db.get_user_id_by_name ("SELECT UNIT FROM USERS WHERE USER_ID = '")
    	print(user_id)
    end

   --GUI tests

   database_web_performance: STRING --result should be compared with the result on the admin site
   do
   	   Result:= db.get_all_table ("USERS")
   end

end
