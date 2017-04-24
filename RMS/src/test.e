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
    	Result := true;
    	if(db.get_user_id_by_name("ANYUSER") = -100500) then
    		Result := false;
    	end
        db.add_teaching (25, "ANYCOURCES","ANYEXAMINATIONS","ANYSUPERVISED","ANYREPORTS","ANYPHDTHESES");
        if(db.get_report(25)=void OR db.get_report(25)="") then
        	Result := false;
        end
    end

end
