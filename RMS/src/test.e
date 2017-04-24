note
	description: "Summary description for {TEST}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST

feature{TEST}

    db: DATABASE;

    connection_test: BOOLEAN
    do --returns false if it fails
    	db.add_user("ANYUSER","ANYUNIT");
    	if(db.get_user_id_by_name("ANYUSER") = -100500) then
    		Result := false;
    	else
    		Result := true;
    	end
    end


end
