int switchstate = 0;
int notes[] = {
  1200, 1200, 1300, 1250, 1400, 1350,
  1200, 1200, 1300, 1250, 1500, 1450,
  1200, 1200, 1500, 1400, 1300, 1200,
  1300, 1300, 1250, 1200, 1250, 1200
};
int delaysAfter[] = { 
  0, 0, 0, 0, 0, 400,
  0, 0, 0, 0, 0, 400,
  0, 0, 0, 0, 0, 400,
  0, 0, 0, 0, 0, 400,
};

int durations[] = { 
  400, 400, 400, 400, 400, 800,
  400, 400, 400, 400, 400, 800,
  400, 400, 400, 400, 400, 800,
  400, 400, 400, 400, 400, 800,
};

void setup() {
  pinMode(2, INPUT);
}

void loop() {
  switchstate = digitalRead(2);
  if (switchstate == HIGH) {
    for (int i = 0; i < 24; ++i) {
      tone(6, notes[i]/2, durations[i]);
      delay(delaysAfter[i] + durations[i]);
    }
  }
}
