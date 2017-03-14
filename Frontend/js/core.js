/*fixed nav menu animations*/
$(document).ready(function(){


	$(".fx_nav_menu_bttn").click(function(){

		if($(this).hasClass("fa-angle-down")){
			$(".fixed_nav_bar").animate({
				top : "0px",
			},300);

			$(this).removeClass("fa-angle-down").addClass("fa-angle-up");
			return
		}
		else{
			$(this).removeClass("fa-angle-up").addClass("fa-angle-down");
			$(".fixed_nav_bar").animate({
				top : "-50px",
			},300);
		}	

	});
});




	courses_index = 1;
	exams_index = 1;
	dip_index = 1;
	stud_index = 1;
	dipl_index = 1;
	grants_index = 1;
	research_index = 1;
	partnership_index = 1;
	publ_index = 1;
	publication_index = 1;
	patent_index = 1;
	iplicense_index = 1;
	charter_index = 1;
	membership_index = 1;
	prizes_index = 1;
	industry_index = 1;
	other_index = 1;



$(window).keypress(function(ev) {
	isEventHappend = false;

	/*Мои курсы*/

	$(".courses_note").keypress(function(e) {
		if (e.keyCode == 13) {
			if (!isEventHappend) {
			$("#courses_data").attr('class', 'fixed_div');
			$("#courses_data").append('<p id="courses_index_' + courses_index + '""><input type="text" class="post" name="courses_note' + courses_index + '" id="data' + courses_index + '" value="' + $("#courses_note_" + courses_index).val() + '"><a href="javascript:$(\'#courses_index_' + courses_index + '\').remove()"> X <\/a>' + '<\/p>');
			courses_index += 1;
			$("#courses").html('<p class="courses_note_' + courses_index + '"><\/p>');
			$('.courses_note_' + courses_index).html('<p><input type="text" size="20" id="courses_note_' + courses_index + '" class="courses_note" placeholder="Write here and press Enter"></p>').find('input').focus();
			isEventHappend = true;
		}};
	});

	/* Экзамены*/

	$(".exams_note").keypress(function(e) {
		if (e.keyCode == 13) {
			if (!isEventHappend) {
			$("#exams_data").attr('class', 'fixed_div');
			$("#exams_data").append('<p id="exams_index_' + exams_index + '""><input type="text" class="post" name="exams_note' + exams_index + '" id="data' + exams_index + '" value="' + $("#exams_note_" + exams_index).val() + '"><a href="javascript:$(\'#exams_index_' + exams_index + '\').remove()"> X <\/a>' + '<\/p>');
			exams_index += 1;
			$("#exams").html('<p class="exams_note_' + exams_index + '"><\/p>');
			$('.exams_note_' + exams_index).html('<p><input type="text" size="20" id="exams_note_' + exams_index + '" class="exams_note" placeholder="Write here and press Enter"></p>').find('input').focus();
			isEventHappend = true;
		}};
	});

	/*Дипломники*/

	$(".dip_note").keypress(function(e) {
		if (e.keyCode == 13) {
			if (!isEventHappend) {
			$("#dip_data").attr('class', 'fixed_div');
			$("#dip_data").append('<p id="dip_index_' + dip_index + '""><input type="text" class="post" name="dip_note' + dip_index + '" id="data' + dip_index + '" value="' + $("#dip_note_" + dip_index).val() + '"><a href="javascript:$(\'#dip_index_' + dip_index + '\').remove()"> X <\/a>' + '<\/p>');
			dip_index += 1;
			$("#dip").html('<p class="dip_note_' + dip_index + '"><\/p>');
			$('.dip_note_' + dip_index).html('<p><input type="text" size="20" id="dip_note_' + dip_index + '" class="dip_note" placeholder="Write here and press Enter"></p>').find('input').focus();
			isEventHappend = true;
		}};
	});

	/*Студенты*/

	$(".stud_note").keypress(function(e) {
		if (e.keyCode == 13) {
			if (!isEventHappend) {
			$("#stud_data").attr('class', 'fixed_div');
			$("#stud_data").append('<p id="stud_index_' + stud_index + '""><input type="text" class="post" name="stud_note' + stud_index + '" id="data' + stud_index + '" value="' + $("#stud_note_" + stud_index).val() + '"><a href="javascript:$(\'#stud_index_' + stud_index + '\').remove()"> X <\/a>' + '<\/p>');
			stud_index += 1;
			$("#stud").html('<p class="stud_note_' + stud_index + '"><\/p>');
			$('.stud_note_' + stud_index).html('<p><input type="text" size="20" id="stud_note_' + stud_index + '" class="stud_note" placeholder="Write here and press Enter"></p>').find('input').focus();
			isEventHappend = true;
		}};
	});

	/*Дипломы*/

	$(".dipl_note").keypress(function(e) {
		if (e.keyCode == 13) {
			if (!isEventHappend) {
			$("#dipl_data").attr('class', 'fixed_div');
			$("#dipl_data").append('<p id="dipl_index_' + dipl_index + '""><input type="text" class="post" name="dipl_note' + dipl_index + '" id="data' + dipl_index + '" value="' + $("#dipl_note_" + dipl_index).val() + '"><a href="javascript:$(\'#dipl_index_' + dipl_index + '\').remove()"> X <\/a>' + '<\/p>');
			dipl_index += 1;
			$("#dipl").html('<p class="dipl_note_' + dipl_index + '"><\/p>');
			$('.dipl_note_' + dipl_index).html('<p><input type="text" size="20" id="dipl_note_' + dipl_index + '" class="dipl_note" placeholder="Write here and press Enter">').find('input').focus();
			isEventHappend = true;
		}};
	});

	/*Гранты*/

	$(".grants_note").keypress(function(e) {
		if (e.keyCode == 13) {
			if (!isEventHappend) {
			$("#grants_data").attr('class', 'fixed_div');
			$("#grants_data").append('<p id="grants_index_' + grants_index + '""><input type="text" class="post" name="grants_note' + grants_index + '" id="data' + grants_index + '" value="' + $("#grants_note_" + grants_index).val() + '"><a href="javascript:$(\'#grants_index_' + grants_index + '\').remove()"> X <\/a>' + '<\/p>');
			grants_index += 1;
			$("#grants").html('<p class="grants_note_' + grants_index + '"><\/p>');
			$('.grants_note_' + grants_index).html('<p><input type="text" size="20" id="grants_note_' + grants_index + '" class="grants_note" placeholder="Write here and press Enter"></p>').find('input').focus();
			isEventHappend = true;
		}};
	});

	/*Исследования вне гранта*/

	$(".research_note").keypress(function(e) {
		if (e.keyCode == 13) {
			if (!isEventHappend) {
			$("#research_data").attr('class', 'fixed_div');
			$("#research_data").append('<p id="research_index_' + research_index + '""><input type="text" class="post" name="research_note' + research_index + '" id="data' + research_index + '" value="' + $("#research_note_" + research_index).val() + '"><a href="javascript:$(\'#research_index_' + research_index + '\').remove()"> X <\/a>' + '<\/p>');
			research_index += 1;
			$("#research").html('<p class="research_note_' + research_index + '"><\/p>');
			$('.research_note_' + research_index).html('<p><input type="text" size="20" id="research_note_' + research_index + '" class="research_note" placeholder="Write here and press Enter"></p>').find('input').focus();
			isEventHappend = true;
		}};
	});

	/*Сотрудничество*/

	$(".partnership_note").keypress(function(e) {
		if (e.keyCode == 13) {
			if (!isEventHappend) {
			$("#partnership_data").attr('class', 'fixed_div');
			$("#partnership_data").append('<p id="partnership_index_' + partnership_index + '""><input type="text" class="post" name="partnership_note' + partnership_index + '" id="data' + partnership_index + '" value="' + $("#partnership_note_" + partnership_index).val() + '"><a href="javascript:$(\'#partnership_index_' + partnership_index + '\').remove()"> X <\/a>' + '<\/p>');
			partnership_index += 1;
			$("#partnership").html('<p class="partnership_note_' + partnership_index + '"><\/p>');
			$('.partnership_note_' + partnership_index).html('<p><input type="text" size="20" id="partnership_note_' + partnership_index + '" class="partnership_note" placeholder="Write here and press Enter"></p>').find('input').focus();
			isEventHappend = true;
		}};
	});

	/*Публикации*/

	$(".publ_note").keypress(function(e) {
		if (e.keyCode == 13) {
			if (!isEventHappend) {
			$("#publ_data").attr('class', 'fixed_div');
			$("#publ_data").append('<p id="publ_index_' + publ_index + '""><input type="text" class="post" name="publ_note' + publ_index + '" id="data' + publ_index + '" value="' + $("#publ_note_" + publ_index).val() + '"><a href="javascript:$(\'#publ_index_' + publ_index + '\').remove()"> X <\/a>' + '<\/p>');
			publ_index += 1;
			$("#publ").html('<p class="publ_note_' + publ_index + '"><\/p>');
			$('.publ_note_' + publ_index).html('<p><input type="text" size="20" id="publ_note_' + publ_index + '" class="publ_note" placeholder="Write here and press Enter"></p>').find('input').focus();
			isEventHappend = true;
		}};
	});

	/*Журнальные публикации*/

	$(".publication_note").keypress(function(e) {
		if (e.keyCode == 13) {
			if (!isEventHappend) {
			$("#publication_data").attr('class', 'fixed_div');
			$("#publication_data").append('<p id="publication_index_' + publication_index + '""><input type="text" class="post" name="publication_note' + publication_index + '" id="data' + publication_index + '" value="' + $("#publication_note_" + publication_index).val() + '"><a href="javascript:$(\'#publication_index_' + publication_index + '\').remove()"> X <\/a>' + '<\/p>');
			publication_index += 1;
			$("#publication").html('<p class="publication_note_' + publication_index + '"><\/p>');
			$('.publication_note_' + publication_index).html('<p><input type="text" size="20" id="publication_note_' + publication_index + '" class="publication_note" placeholder="Write here and press Enter"></p>').find('input').focus();
			isEventHappend = true;
		}};
	});

	/*Патенты*/

	$(".patent_note").keypress(function(e) {
		if (e.keyCode == 13) {
			if (!isEventHappend) {
			$("#patent_data").attr('class', 'fixed_div');
			$("#patent_data").append('<p id="patent_index_' + patent_index + '""><input type="text" class="post" name="patent_note' + patent_index + '" id="data' + patent_index + '" value="' + $("#patent_note_" + patent_index).val() + '"><a href="javascript:$(\'#patent_index_' + patent_index + '\').remove()"> X <\/a>' + '<\/p>');
			patent_index += 1;
			$("#patent").html('<p class="patent_note_' + patent_index + '"><\/p>');
			$('.patent_note_' + patent_index).html('<p><input type="text" size="20" id="patent_note_' + patent_index + '" class="patent_note" placeholder="Write here and press Enter"></p>').find('input').focus();
			isEventHappend = true;
		}};
	});

	/*IP лицензии*/

	$(".iplicense_note").keypress(function(e) {
		if (e.keyCode == 13) {
			if (!isEventHappend) {
			$("#iplicense_data").attr('class', 'fixed_div');
			$("#iplicense_data").append('<p id="iplicense_index_' + iplicense_index + '""><input type="text" class="post" name="iplicense_note' + iplicense_index + '" id="data' + iplicense_index + '" value="' + $("#iplicense_note_" + iplicense_index).val() + '"><a href="javascript:$(\'#iplicense_index_' + iplicense_index + '\').remove()"> X <\/a>' + '<\/p>');
			iplicense_index += 1;
			$("#iplicense").html('<p class="iplicense_note_' + iplicense_index + '"><\/p>');
			$('.iplicense_note_' + iplicense_index).html('<p><input type="text" size="20" id="iplicense_note_' + iplicense_index + '" class="iplicense_note" placeholder="Write here and press Enter"></p>').find('input').focus();
			isEventHappend = true;
		}};
	});

	/*Грамоты*/

	$(".charter_note").keypress(function(e) {
		if (e.keyCode == 13) {
			if (!isEventHappend) {
			$("#charter_data").attr('class', 'fixed_div');
			$("#charter_data").append('<p id="charter_index_' + charter_index + '""><input type="text" class="post" name="charter_note' + charter_index + '" id="data' + charter_index + '" value="' + $("#charter_note_" + charter_index).val() + '"><a href="javascript:$(\'#charter_index_' + charter_index + '\').remove()"> X <\/a>' + '<\/p>');
			charter_index += 1;
			$("#charter").html('<p class="charter_note_' + charter_index + '"><\/p>');
			$('.charter_note_' + charter_index).html('<p><input type="text" size="20" id="charter_note_' + charter_index + '" class="charter_note" placeholder="Write here and press Enter"></p>').find('input').focus();
			isEventHappend = true;
		}};
	});

	/*Членство*/

	$(".membership_note").keypress(function(e) {
		if (e.keyCode == 13) {
			if (!isEventHappend) {
			$("#membership_data").attr('class', 'fixed_div');
			$("#membership_data").append('<p id="membership_index_' + membership_index + '""><input type="text" class="post" name="membership_note' + membership_index + '" id="data' + membership_index + '" value="' + $("#membership_note_" + membership_index).val() + '"><a href="javascript:$(\'#membership_index_' + membership_index + '\').remove()"> X <\/a>' + '<\/p>');
			membership_index += 1;
			$("#membership").html('<p class="membership_note_' + membership_index + '"><\/p>');
			$('.membership_note_' + membership_index).html('<p><input type="text" size="20" id="membership_note_' + membership_index + '" class="membership_note" placeholder="Write here and press Enter"></p>').find('input').focus();
			isEventHappend = true;
		}};
	});

	/*Призы*/

	$(".prizes_note").keypress(function(e) {
		if (e.keyCode == 13) {
			if (!isEventHappend) {
			$("#prizes_data").attr('class', 'fixed_div');
			$("#prizes_data").append('<p id="prizes_index_' + prizes_index + '""><input type="text" class="post" name="prizes_note' + prizes_index + '" id="data' + prizes_index + '" value="' + $("#prizes_note_" + prizes_index).val() + '"><a href="javascript:$(\'#prizes_index_' + prizes_index + '\').remove()"> X <\/a>' + '<\/p>');
			prizes_index += 1;
			$("#prizes").html('<p class="prizes_note_' + prizes_index + '"><\/p>');
			$('.prizes_note_' + prizes_index).html('<p><input type="text" size="20" id="prizes_note_' + prizes_index + '" class="prizes_note" placeholder="Write here and press Enter"></p>').find('input').focus();
			isEventHappend = true;
		}};
	});


	/*Индустрия*/

	$(".industry_note").keypress(function(e) {
		if (e.keyCode == 13) {
			if (!isEventHappend) {
			$("#industry_data").attr('class', 'fixed_div');
			$("#industry_data").append('<p id="industry_index_' + industry_index + '""><input type="text" class="post" name="industry_note' + industry_index + '" id="data' + industry_index + '" value="' + $("#industry_note_" + industry_index).val() + '"><a href="javascript:$(\'#industry_index_' + industry_index + '\').remove()"> X <\/a>' + '<\/p>');
			industry_index += 1;
			$("#industry").html('<p class="industry_note_' + industry_index + '"><\/p>');
			$('.industry_note_' + industry_index).html('<p><input type="text" size="20" id="industry_note_' + industry_index + '" class="industry_note" placeholder="Write here and press Enter"></p>').find('input').focus();
			isEventHappend = true;
		}};
	});

	/*Другое (обычный набор текста и дальнейшее закрепление) никуда не отсылается*/

	$(".other_note").keypress(function(e) {
		if (e.keyCode == 13) {
			if (!isEventHappend) {
			$("#other_data").attr('class', 'fixed_div');
			$("#other_data").append('<p id="other_index_' + other_index + '""><input type="text" class="post" name="other_note' + other_index + '" id="data' + other_index + '" value="' + $("#other_note_" + other_index).val() + '"><a href="javascript:$(\'#other_index_' + other_index + '\').remove()"> X <\/a>' + '<\/p>');
			other_index += 1;
			$("#other").html('<p class="other_note_' + other_index + '"><\/p>');
			$('.other_note_' + other_index).html('<p><input type="text" size="20" id="other_note_' + other_index + '" class="other_note" placeholder="Write here and press Enter"></p>').find('input').focus();
			isEventHappend = true;
		}};
	});

});  

function disable_inputs() {
	$("#courses_note_1").attr("disabled","");
	$("#exams_note_1").attr("disabled","");
	$("#dip_note_1").attr("disabled","");
	$("#stud_note_1").attr("disabled","");
	$("#dipl_note_1").attr("disabled","");
	$("#grants_note_1").attr("disabled","");
	$("#research_note_1").attr("disabled","");
	$("#partnership_note_1").attr("disabled","");
	$("#publ_note_1").attr("disabled","");
	$("#publication_note_1").attr("disabled","");
	$("#patent_note_1").attr("disabled","");
	$("#iplicense_note_1").attr("disabled","");
	$("#charter_note_1").attr("disabled","");
	$("#membership_note_1").attr("disabled","");
	$("#prizes_note_1").attr("disabled","");
	$("#industry_note_1").attr("disabled","");
	$("#other_note_1").attr("disabled","");
}



	



