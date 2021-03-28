function roll() {
    console.log("Rolling");
}

function score() {
    console.log("Scoring");

    let message = "You need to write score()\n...";
    displayScoring(message);
}




//------------------------------------------------
//YOUR CODE ABOVE
//You may call the functions listed below but should not modify them

//returns the value showing on the given die (1-5)
function getDieValue(dieNumber) {
    let die = document.getElementById('die' + dieNumber);
    return die.textContent;
}

//Changes the given die number (1-5) to the given value (1-6)
function setDie(dieNumber, value) {
    let die = document.getElementById('die' + dieNumber);
    let regex = /\d+/;
    die.className = die.className.replace(regex, value);
    die.innerText = value;
}

//returns true if the given die number (1-5) is in the locked state, false if not
function isLocked(dieNumber) {
    let die = document.getElementById('die' + dieNumber);
    return die.className.indexOf("-fill") != -1;
}

//displays the message in the scoring information textarea
function displayScoring(message) {
    let textarea = document.getElementById('score-report');
    textarea.value = message;
}