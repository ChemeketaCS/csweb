function roll() {
    console.log("Rolling");
}

function score() {
    console.log("Scoring");

    let message = "You need to write this\n...";
    displayScoring(message);
}




//------------------------------------------------
//YOUR CODE ABOVE
//You may call the functions listed below but should not modify them
/*
    Code provided for use in private assignment repositories in CS290. This may not be
    publicly reposted without permission.
*/

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

//Takes in an array of 5 numbers (each 1-6) and sets the dice to those values
function setDice(diceArray) {
    if (diceArray.length != 5)
        return;

    diceArray.forEach((value, index) => {
        setDie(index + 1, value);
    });
}

//returns true if the given die number (1-5) is in the locked state, false if not
function isLocked(dieNumber) {
    let die = document.getElementById('die' + dieNumber);
    return die.className.indexOf("-fill") != -1;
}

//changes the given die number (1-5) ifrom locked to unlocked or vice verse
function flipState(dieNumber) {
    let die = document.getElementById('die' + dieNumber);
    if (isLocked(dieNumber)) {
        die.className = die.className.replace("-fill", "");
    } else {
        let regex = /bi-dice-\d/;
        die.className = die.className.replace(regex, "$&-fill");
    }
}

//displays the message in the scoring information textarea
function displayScoring(message) {
    let textarea = document.getElementById('score-report');
    return textarea.value = message;
}