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
const int duh = dit * 5; // used as time between characters
const int wordDelay = tempo * 15; // 7 times longer than a dot is the standard separation between words



void setup() {
    pinMode(buzzer, OUTPUT);
}

void loop() {
    playMorseChar("-.-.");  // C
    playMorseChar("---");   // O
    playMorseChar(".-..");  // L
    playMorseChar("-");     // T
    delay(wordDelay - dah);
}

void playMorseChar(String letter) {
    for(int i = 0; i < letter.length(); i++) {
        char c = letter[i];

        // start playing signal
        analogWrite(buzzer, duty);
        // signal duration depending if its a dot or a dash
        if(c == '.') {
            delay(dit);
        }
        else {
            delay(dah);
        }

        // stop the signal
        noTone(buzzer);
        // if not the last signal of the character, make a short stop otherwise a longer stop
        if (i < letter.length() - 1){
            delay(dit);
        }
        else {
            delay(duh);
        }
    }
}
