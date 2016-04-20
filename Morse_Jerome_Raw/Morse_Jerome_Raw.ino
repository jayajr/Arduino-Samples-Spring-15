/* Morse Code for Jerome
J= .---
E= .
R= .-.
O= ---
M= --
E= .
*/

void setup() {
    pinMode(13, OUTPUT);
}


void loop() {
  //J
  digitalWrite(13, HIGH);
  delay(250);
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(100);
  //E
  digitalWrite(13, HIGH);
  delay(250);
  digitalWrite(13, LOW);
  delay(100);
  //R
  digitalWrite(13, HIGH);
  delay(250);
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(13, HIGH);
  delay(250);
  digitalWrite(13, LOW);
  delay(100);
  //O
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(100);
  //M
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(100);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(100);
  //E
  digitalWrite(13, HIGH);
  delay(250);
  digitalWrite(13, LOW);
  delay(100);
  //Pause
  delay(2000);
}
