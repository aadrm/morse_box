/*
Arduino program that plays a morse code on start up
*/

// program variables
// pins
const int buzzer = 11; // an active buzzer
const int duty = 60; // modulates the sound produced by the buzzer
const int tempo = 165; // base unit of time
const int dit = tempo; // morse dot or time between dots and dashes
const int dah = tempo * 3; // morse dash, it's standard to be 3 times longer than the dot
const int duh = dit * 5; // used as time between characters, it's not a standard value but it's used to make the game a bit easier.
const int wordDelay = tempo * 12; // 7 times longer than a dot is the standard separation between words

void setup() {
    pinMode(buzzer, OUTPUT);
}

void loop() {
    playMorseChar("-.-.");  // C
    playMorseChar("---");   // O
    playMorseChar(".-..");  // L
    playMorseChar("-");     // T
    delay(wordDelay);
}

void playMorseChar(String letter) {
    for(int i = 0; i < letter.length(); i++) {
        /*
        Goes through the characters of a morse word (a morse word being a single alphabet character) and plays it.
        */
        char c = letter[i];
        // start signal
        analogWrite(buzzer, duty);
        // signal duration
        delay(charDuration(c));
        // stop the signal
        noTone(buzzer);
        // if not the last dit or dat of the character make a short stop otherwise a longer stop
        if (i < letter.length() - 1) {
            delay(dit);
        }
        else {
            delay(duh);
        }
    }
}

int charDuration(char c) {
    /*
    Returns the duration of the character, ignores anything that's not a period or a hyphen.
    */
    int duration = 0;
    if (c == '.') {
        duration = dit;
    }
    else if (c == '-') {
        duration = dah;
    }
    return duration
}
