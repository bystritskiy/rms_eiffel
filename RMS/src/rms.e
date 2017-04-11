note
	description: "[
				application service
			]"
	date: "$Date: 2016-10-21 09:45:18 -0800 (Fri, 21 Oct 2016) $"
	revision: "$Revision: 99331 $"

class
	RMS


inherit
	WSF_LAUNCHABLE_SERVICE
		redefine
			initialize
		end
	APPLICATION_LAUNCHER [RMS_EXECUTION]


create
	make_and_launch

feature {NONE} -- Initialization

	initialize
			-- Initialize current service.
		do
			Precursor
			set_service_option ("port", 8080)
			set_service_option ("verbose", "no")
		end


end
