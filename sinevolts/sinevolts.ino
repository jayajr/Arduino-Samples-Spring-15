int frequency; //in Kilohertz
int index1;
int sinearray[1024];

void arraysetup() {
  index1 = 0;

  while (index1 < 1024) {
    sinearray[index1] = 2048 * sin ( (index1 / 1023.0) * (3.14159 / 2) ) + 2048;
    index1++;
  }

  index1 = 0;
}

void setup() {
  pinMode(DAC0, OUTPUT);
  index1 = 0;
  frequency = 1;
  arraysetup();
}

void loop() {
  while (index1 < 1024) {
    analogWrite(DAC0, sinearray[index1]);
    index1++;
    delay(0.24414 / frequency);
  }
  while (index1 > 0) {
    analogWrite(DAC0, sinearray[index1]);
    index1--;
    delay(0.24414 / frequency);
  }
  while (index1 < 1024) {
    analogWrite(DAC0, -1 * sinearray[index1]);
    index1++;
    delay(0.24414 / frequency);
  }
  while (index1 > 0) {
    analogWrite(DAC0, -1 * sinearray[index1]);
    index1--;
    delay(0.24414 / frequency);
  }
}
