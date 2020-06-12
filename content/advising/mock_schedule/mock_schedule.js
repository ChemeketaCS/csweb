
function addNote(note, important = false) {
    $("#schoolNotes ul").prepend($("<li>").addClass("tempNote").html(note));
    $("#schoolNotes").show();
}

function buildTable() {

    //Clear existing table/notes
    $("#schedTable").html("");
    $("#schoolNotes li.tempNote").remove();
    $("#schoolNotes").hide();

    var school = $("#school").val().toUpperCase();
    var mathStart = $("#math").prop("selectedIndex");
    var csStart = $("#cs").val().toUpperCase();
    $("#schoolname").text(school);

    //Build
    var sched = [
        ["Fall"],
        ["Winter"],
        ["Spring"],
        ["Fall"],
        ["Winter"],
        ["Spring"]
    ];

    //CS
    if (csStart == "EARLY") {
        sched[0].push("CS160");
        sched[1].push("CS161");
        sched[2].push("CS162");
        sched[3].push("CS260");
    } else {
        sched[2].push("CS160");
        sched[3].push("CS161");
        sched[4].push("CS162");
        sched[5].push("CS260");
    }

    if (school.slice(0, 3) == "OSU") {
        if (school == "OSU-APPLIED") {
            sched[4].push("CS271");
        } else {
            sched[5].push("ECE271/2*");
            addNote("ECE271 & 272 are not taught at Chemeketa. Students need to take them through LBCC or OSU.");
        }
        sched[5].push("CS290");
    }

    if (school == "PSU") {
        if (csStart == "EARLY") {
            sched[4].push("CS202*");
            addNote("<strong>Chemeketa does not offer CS202. You will have to take it at PSU or PCC. It must be COMPLETED before applying to the school of engineering in the Spring. CS260 is the Prereq for this - you should complete CS260 in Fall and then do this. If you are on the LATE plan, you will need to take CS202 in fall or your Jr year at PSU before applying to join CS program.</strong>");
        } else {
            sched[5].push("CS202 (Summer)*");
            addNote("You will want to take CS202 in summer. If you wait to take it until Fall you will not get to start Jr year until the following academic year.");
        }

        sched[4].push("CS271*");
        addNote("PSU gives you CS201 credit for taking CS271 IF you also transfer in CS160 and CS260 from Chemeketa. If you do not have all three classes, 271 will not earn credit.");

        sched[3].push("CIS140U*");
        addNote("PSU does not require you to take CIS140U, but they do expect you to be proficient with Linux. You can either take CIS140U or self study.");
    }

    if (school == "WOU") {
        sched[4].push("CS271");
    }


    //Math
    //parallel array of term/course
    var mathOffset = mathStart;
    var mathCourses = [
        [0, 1, 2, 3],
        ['Math111', 'Math112', 'Math251', 'Math252']
    ];
    
    if (school == "WOU") {
        mathCourses = [
            [0],
            ['Math111']
        ];
    }

    for (var i = 0; i < (mathCourses[0].length - mathOffset) ; ++i) {
        var obj = mathCourses[1][i + mathOffset];
        sched[i].push(obj);
    }

    if (school == "WOU") {
        sched[1].push("Math231");
        sched[2].push("Math232");
    }

    
    if (school == "OSU-SYSTEMS") {
        sched[1].push("Math231");
        if (mathOffset > 1) {
            sched[2].push("Math253");
            sched[3].push("Math254");
        } else {
            sched[4].push("Math253");
            sched[5].push("Math254");
        }
    } else if (school == "OREGON-TECH") {
        if (mathOffset > 0) {
            sched[3].push("Math254");
        } else {
            sched[5].push("Math254");
        }
    } else if (school == "PSU") {
        sched[1].push("Math231");
        sched[2].push("Math232");
        sched[4].push("Math253");
    } else if (school != "WOU") {
        if (mathOffset == 0) {
            sched[4].push("Math231");
        }
        else {
            sched[3].push("Math231");
        }
        if (school.slice(0, 3) != "OSU") 
            sched[5].push("Math232");

    }


    if (school == "OREGON")
        addNote("MTH253 can be taken for needed credits at Oregon.");

    if (school == "WOU") {
        for (var i = 0; i < sched.length; ++i) {
            for (var j = 0; j < sched[i].length; ++j) {
                if (sched[i][j].slice(0, 5) == "Math2")
                    sched[i][j] += "*";
            }
        }
    }

    //Science
    if (school == "OREGON-TECH" ||
        school == "OSU-SYSTEMS") {
        sched[3].push("PH211");
        sched[4].push("PH212");
        sched[5].push("PH213");
    } else if (school == "PSU") {
        sched[3].push("PH211*");
        sched[4].push("PH212*");
        sched[5].push("PH213*");
        addNote("PSU requires a 3 course sequence of science, You can substitute Chem22X or Biology21X series for Physics");
        
    } else if (school == "OREGON") {
        sched[3].push("Science (Sequence)*");
        sched[4].push("Science (Sequence)*");
        sched[5].push("Science (Sequence)*");
        addNote("U of O requires a 3 course sequence of science. See the ASOT-CS advising guide for details.");
    } else {
        if (school == "OSU-APPLIED") {
            sched[3].push("Science*");
            addNote("For OSU's applied CS degree you should have at least one biological and one physical science course.");
        }
        else
            sched[3].push("Science");

        sched[4].push("Science");
        sched[5].push("Science");
    }


    //Other
    sched[0].push("WR121");
    sched[2].push("Comm111*");
    if (school == "OREGON") {
        sched[1].push("WR122");
    } else if (school == "OREGON-TECH" || school.slice(0, 3) == "OSU") {
        sched[1].push("WR122 or 227*");
        addNote("You will eventually need WR227 and WR122.");
    } else {
        sched[1].push("WR122 or WR227");
    }

    if (school == "OREGON-TECH") {
        addNote("<strong>Students planning to transfer to Oregon Tech are HIGHLY encouraged to look at dual enrolling in their second year and start taking courses at both campuses.</strong>");

        sched[5].push("CST236 or 238*");
        addNote("You need to take CST236 or CST238 in spring this term at OT to be eligible to start Jr year project in fall.");

        var otherList = ['Social Science', 'Arts & Letters',
                        'Social Science', 'Arts & Letters',
                        'PSY 201', 'Arts & Letters',
                        'Social Science', 'PE'];
        
      
    } else {

        var otherList = ['Social Science', 'Arts & Letters',
                        'Social Science', 'Arts & Letters',
                        'Social Science', 'Arts & Letters',
                        'Social Science', 'PE'];
    }


    while (otherList.length > 0) {
        var minIndex = 0;
        for (var i = 1; i < sched.length; ++i) {
            if (sched[i].length < sched[minIndex].length)
                minIndex = i;
        }
        //var obj = {};
        //obj[name] =
        sched[minIndex].push(otherList.splice(0, 1));
    }


    if (school == "OREGON") {
        addNote("<b>University of Oregon requires a B or better in CS courses to transfer in for credit.</b> You must file a petition to receive transfer credit for CS courses you get a C in.");
    }

    //Render

    var header = $("<tr>");
    $("#schedTable").append($("<thead>").append(header));

    for (var i = 0; i < sched.length; ++i) {
        var col = sched[i];
        header.append($("<th>").text(col[0]));
    }

    var body = $("<tbody>");
    $("#schedTable").append($(body));

    var longCol = 0;
    for (var i = 1; i < sched.length; ++i) {
        if (sched[i].length > sched[longCol].length)
            longCol = i;
    }

    for (var i = 1; i < sched[longCol].length; ++i) {
        var row = $("<tr>");
        body.append(row);
        for (var j = 0; j < sched.length; ++j) {
            var courseCell = $("<td>");
            if (sched[j].length > i) {
                courseCell.text(sched[j][i]);

                if (sched[j][i].slice(0, 2) == "CS") {
                    courseCell.addClass('csClass');
                }
                if (sched[j][i].slice(0, 4) == "Math") {
                    courseCell.addClass('mathClass');
                }

            }

            row.append(courseCell);
        }
    }
}

function updateURL() {
    var newURL = "?school=" + $("#school").val() + "&cs=" + $("#cs").val() + "&math=" + $("#math").val();
    window.history.pushState("object or string", "CS Transfer Schedule Planner", newURL);
}

function setSelections() {
    $("#school").val("UNKNOWN");
    $("#math").val("111");
    $("#cs").prop("Early");
    var sPageURL = window.location.search.substring(1);
    var sURLVariables = sPageURL.split('&');
    for (var i = 0; i < sURLVariables.length; i++)
    {
        var sParameterName = sURLVariables[i].split('=');
        if (sParameterName[0].toLowerCase() == "school")
        {
            $("#school").val(sParameterName[1].toUpperCase());
        }
        else if (sParameterName[0].toLowerCase() == "math")
        {
            $("#math").val(decodeURI(sParameterName[1]));
        }
        else if (sParameterName[0].toLowerCase() == "cs")
        {
            $("#cs").val(sParameterName[1]);
        }
    }
}


document.addEventListener("DOMContentLoaded", function(event) { 
    $("#school").on("change", function(e,ui) {updateURL(); buildTable()});
    $("#cs").on("change", function(e,ui) {updateURL(); buildTable()});
    $("#math").on("change", function(e,ui) {updateURL(); buildTable()});

    setSelections();

    buildTable();

    window.onpopstate = function(event) {
        setSelections();
        buildTable();
    };

});