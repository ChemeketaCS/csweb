
const MTMTypes = {"none": 0, "regional": 1, "research": 2};

function getMTMType(school) {
    switch(school) {
        case "EOU":
        case "WOU":
        case "SOU":
            return MTMTypes.regional;
        case "OIT":
            return MTMTypes.none;
        default:
            return MTMTypes.research;
    }
}

class Term {
    constructor(name) {
      this.name = name;
      this.classes = [];
    }
}

function addNote(note, important = false) {
    $("#schoolNotes ul").append($("<li>").addClass("tempNote").html(note));
    $("#schoolNotes").show();
}

function addMath(sched, mathStart, school) {
    
    let calcTrac = ["MTH111", "MTH112", "MTH251", "MTH252"];
    if(school === "WOU") {
        calcTrac = ["MTH111", "MTH112 *", "MTH251 *", "MTH252 *"];
        addNote("WOU will accept MTH231 and 232 instead of MTH 112/251/252")
    } 
    if(school === "PSU") {
        calcTrac.push("MTH 253 *");
        addNote("PSU requires Math 253 or 261. If you do not take 253 at Chemeketa you will have to take one of those classes at PSU.")
    } 

    let mathStartIndex = 0;
    switch(mathStart) {
        case "112":
            mathStartIndex = 1;
            break;
        case "251":
            mathStartIndex = 2;
            break;
        case "252":
            mathStartIndex = 3;
            break;
        case "XXX":
            mathStartIndex = 4;
            break;
    }
    calcTrac = calcTrac.slice(mathStartIndex);
    calcTrac.forEach( (course, i) => {
        sched[i].classes.push(course);
    });

    if(getMTMType(school) === MTMTypes.research) 
    {
        let discreteStart = 3;
        if(mathStart == "111")
            discreteStart = 4;
        sched[discreteStart].classes.push("MTH231");
        sched[discreteStart + 1].classes.push("MTH232");
    }
}

function addCS(sched, csStartTerm, school) {
    let coreSeq = ["CS160", "CS161", "CS162"];
    coreSeq.forEach( (course, i) => {
        sched[csStartTerm + i].classes.push(course);
    });

    if(csStartTerm === 0)
        sched[3].classes.push("CS260");
    else 
        sched[5].classes.push("CS260");

    if(getMTMType(school) === MTMTypes.research 
        || school === "WOU") 
    {
        if(school != "OSU-SYSTEMS") {
            sched[4].classes.push("CS205 *");
            addNote("CS205 replaced CS271. If you already took 271, talk to a CS instructor for transfer advice.");
        }
        else {
            sched[5].classes.push("EE271 *");
            addNote("OSU Systems students should try to take EE271 at OSU in the summer before they start Jr year. We do not offer that class.");
        }
    }


    if(school.slice(0, 3) === "OSU") 
    {
        sched[5].classes.push("CS290");
    }

    if(school === "OIT") 
    {
        sched[5].classes.push("CST236/238 *");
        addNote("Oregon Tech students should look to take CST 236 or 238 at Oregon Tech in Spring or Summer before their Junior year. You MUST have one of these done to start the Junior project sequence.");
    }
}

function addScience(sched, school) {
    let sciClasses = ["Lab Science", "Lab Science"];

    if(getMTMType(school) === MTMTypes.research && school !== "OSU-SYSTEMS") 
    {
        sciClasses = ["2XX Sci Sequence *", "2XX Sci Sequence *", "2XX Sci Sequence *"];
        addNote("For the OSU/PSU/UofO MTM, you must complete one of these science sequences: PH211-213, BIO211-213, or CH221-223");
    } 

    if(school === "OREGON") {
        addNote("U of O will also accept GEOL 201, 202, 203 as a science sequence");
    }

    if(school === "OIT" || school === "OSU-SYSTEMS") {
        sciClasses = ["PH211", "PH212", "PH213"];
    }

    sciClasses.forEach( (course, i) => {
        sched[3 + i].classes.push(course);
    });
}

function addGenEd(sched, school) {
    let genEd = ["FYE105", "WR121", "COMM111", "Arts & Letters *", "Social Science *", "Arts & Letters *", "Social Science *"];

    if(getMTMType(school) === MTMTypes.research) 
    {
        genEd.push("WR227");
    } 
    if(getMTMType(school) === MTMTypes.regional || school.slice(0,3) === "OSU") 
    {
        genEd.push("WR122");
    } 

    let termNum = 0;
    genEd.forEach( (course) => {
        while(sched[termNum].classes.length >= 4 && termNum != 5)
            termNum = Math.min(termNum + 1, 5);

        sched[termNum].classes.push(course);
    });

}

function addOther(sched, school) {
    let extras = [];

    if(school.slice(0, 3) === "OSU") {
        addNote("Ideally, one of your Arts and Letters or Social Science courses should try to fulfill <a href='https://dpd.oregonstate.edu/dpd-course-list'>OSU's Difference, Power, and Discrimination requirement</a>. Options for doing this are HST 201, HUM 221, SOC 206, SOC 213.");
    }

    if(school === "EOU") {
        extras.push("A&L (in 2nd discipline) *");
        extras.push("SS (in 2nd discipline) *");
        addNote("EOU requires 3 Arts and Letters (in at least two disciplines) and three Social Sciences (in at least two disciplines. If you take HST 201 as one of them it fulfills the EOU <a href='https://www.eou.edu/registrar/dpd/'>Difference, Power, and Discrimination</a> requirement.")
    }

    if(school === "OSU") {
        extras.push("HPE 295 *");
        addNote("OSU has a physical education requirement. You can satisfy it with HPE 295.")
    }

    if(school === "PSU") {
        extras.push("A&L or SS *");
        addNote("If possible, take an extra Arts and Letters of Social Science course for PSU transfer.")
    }

    let termNum = 0;
    extras.forEach( (course) => {
        while(sched[termNum].classes.length >= 4 && termNum != 5)
            termNum = Math.min(termNum + 1, 5);

        sched[termNum].classes.push(course);
    });
}

function buildTable() {
    //Clear existing table/notes
    $("#schedTable").html("");
    $("#schoolNotes li.tempNote").remove();
    $("#schoolNotes").hide();

    var school = $("#school").val().toUpperCase();
    var mathStart = $("#math").val();
    var csStart = Number($("#cs").val());
    $("#schoolname").text($("#school option:selected").text());

    if(school === "UNKNOWN")
        addNote("The unknown school schedule shows a base transfer plan for OSU, UofO, or PSU. You need to decide on a specific target school by the end of your second year.")
    if(school === "OIT")
        addNote("Oregon Tech is NOT covered by the MTM. If you are interested in OT, you should look to dual enroll as soon as possible so you can get advising from them and start taking some of the unique courses only offered at Oregon Tech.")
    if(school === "OREGON")
        addNote("U of O requires B's or better in all CS courses. If you transfer with a C you will have to file a petition to avoid retaking the course.")

    //Schedule built as an array of six Terms
    var sched = [
        new Term("Fall"),
        new Term("Winter"),
        new Term("Spring"),
        new Term("Fall"),
        new Term("Winter"),
        new Term("Spring"),
    ];

    addCS(sched, csStart, school);
    addMath(sched, mathStart, school);
    addScience(sched, school);
    addGenEd(sched, school);
    addOther(sched, school);

    //Pad out to 90ish credits
    let totalClasses = sched
                        .map( term => term.classes.length )
                        .reduce( (total, cur) => {return total + cur} );

    //Assume ~4 classes are 5 credits, leaving 86 credits to make up 4 at a time
    let numPadClasses = Math.ceil((86 - totalClasses * 4) / 4);
    let termNum = 5;
    while(numPadClasses-- > 0) {
        let curNumClasses = sched[termNum].classes.length;
        if(curNumClasses >= 3)
            termNum = Math.max(termNum - 1, 4);

        sched[termNum].classes.push("Electives? *");
    }

    //Render
    var header = $("<tr>");
    $("#schedTable").append($("<thead>").append(header));

    for (var i = 0; i < sched.length; ++i) {
        let term = sched[i];
        header.append($("<th>").text(term.name));
    }

    var body = $("<tbody>");
    $("#schedTable").append($(body));

    //Figure out needed rows
    let maxClasses = sched
                        .map( term => term.classes.length )
                        .reduce( (maxVal, cur) => {return Math.max(maxVal, cur)} );

    for (var i = 0; i < maxClasses; ++i) {
        var row = $("<tr>");
        body.append(row);
        //For each row, add classes for each term
        for (var j = 0; j < sched.length; ++j) {
            var courseCell = $("<td>");
            if (sched[j].classes.length > i) {
                let className = sched[j].classes[i];

                courseCell.text(className);

                if (className.slice(0, 2) == "CS") {
                    courseCell.addClass('csClass');
                } else if (className.slice(0, 3) == "MTH") {
                    courseCell.addClass('mathClass');
                }
            }

            row.append(courseCell);
        }
    }
}

function updateURL() {
    var newURL = "#school=" + $("#school").val() + "&cs=" + $("#cs").val() + "&math=" + $("#math").val();
    window.history.pushState("object or string", "CS Transfer Schedule Planner", newURL);
}

function setSelections() {
    $("#school").val("UNKNOWN");
    $("#math").val("111");
    $("#cs").prop("Early");
    var hashString = window.location.hash.substring(1);
    var hashVars = hashString.split('&');
    for (var i = 0; i < hashVars.length; i++)
    {
        var sParameterName = hashVars[i].split('=');
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