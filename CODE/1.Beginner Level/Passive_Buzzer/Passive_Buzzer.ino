int buzzerPin = 5;
int tempo = 200;
char notes[] = "eeeeeeegcde fffffeeeeddedg";
int duration[] = {1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2};

void playTheTone(char note, int duration) {
  char notesName[] = { 'c', 'd', 'e', 'f', 'g' };
  int tones[] = { 261, 293, 329, 349, 392 };

  for (int i = 0; i <= sizeof(tones); i++) {
    if (note == notesName[i]) {
      tone(buzzerPin, tones[i], duration);
    }
  }
}

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  for (int i = 0; i <= sizeof(notes)-1; i++) {
    if (notes[i] == ' ') {
      delay(duration[i] * tempo);
    } else {
      playTheTone(notes[i], duration[i] * tempo);
    }
    delay((tempo*2)*duration[i]);
  }
}
