int ib = 0;
//dot = 1 units
//dash = 3 units
//space between parts of same letter = 1 unit
//space between letters = 3 units
//space between words = 7 units

/* Alphabet in Morse Code
A .-
B -...
C -.-.
D -..
E .
F ..-.
G --.
H ....
I ..
J .---
K -.-
L .-..
M --
N -.
O ---
P .--.
Q --.-
R .-.
S ...
T -
U ..-
V ...-
W .--
X -..-
Y -.--
Z --..
Jerome=   .--- . .-. --- -- . /
Wilfred=    .-- .. .-.. ..-. .-. . -.. /
Guarin=     --. ..- .- .-. .. -. /
Andaya=   .- -. -.. .- -.-- .- /
Jr.=           .--- .-. /
*/


void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Serial.println("--------- Start ---------");
  Serial.println("--- Type Message Here ---");
  Serial.println();
}

void loop() {
  if (Serial.available() > 0) {
    ib =Serial.read();
    Serial.println(char(ib));
    Serial.println();
    if (ib == 'A' || ib == 'a'){
      A();
    }
    if (ib == 'B' || ib == 'b'){
      B();
    }
    if (ib == 'C' || ib == 'c'){
      C();
    }
    if (ib == 'D' || ib == 'd'){
      D();
    }
    if (ib == 'E' || ib == 'e'){
      E();
    }
    if (ib == 'F' || ib == 'f'){
      Ff();
    }
    if (ib == 'G' || ib == 'g'){
      G();
    }
    if (ib == 'H' || ib == 'h'){
      H();
    }
    if (ib == 'I' || ib == 'i'){
      I();
    }
    if (ib == 'J' || ib == 'j'){
      J();
    }
    if (ib == 'K' || ib == 'k'){
      K();
    }
    if (ib == 'L' || ib == 'l'){
      L();
    }
    if (ib == 'M' || ib == 'm'){
      M();
    }
    if (ib == 'N' || ib == 'n'){
      N();
    }
    if (ib == 'O' || ib == 'o'){
      O();
    }
    if (ib == 'P' || ib == 'p'){
      P();
    }
    if (ib == 'Q' || ib == 'q'){
      Q();
    }
    if (ib == 'R' || ib == 'r'){
      R();
    }
    if (ib == 'S' || ib == 's'){
      S();
    }
    if (ib == 'T' || ib == 't'){
      T();
    }
    if (ib == 'U' || ib == 'u'){
      U();
    }
    if (ib == 'V' || ib == 'v'){
      B();
    }
    if (ib == 'W' || ib == 'w'){
      W();
    }
    if (ib == 'X' || ib == 'x'){
      X();
    }
    if (ib == 'Y' || ib == 'y'){
      Y();
    }
    if (ib == 'Z' || ib == 'z'){
      Z();
    }
    if (ib == ' '){
      space();
    }
    if (ib == '1'){
      one();
    }
    if (ib == '2'){
      two();
    }
    if (ib == '3'){
      three();
    }
    if (ib == '4'){
      four();
    }
    if (ib == '5'){
      five();
    }
    if (ib == '6'){
      six();
    }
    if (ib == '7'){
      seven();
    }
    if (ib == '8'){
      eight();
    }
    if (ib == '9'){
      nine();
    }
    if (ib == '0'){
      zero();
    }
  }
}  

void dot() {
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(100);
}

void dash() {
  digitalWrite(13, HIGH);
  delay(300);
  digitalWrite(13, LOW);
  delay(100);
}

void slash() {
  delay(600);
}

void A() {
	dot();
	dash();
        delay(200);
}
void B() {
	dash();
	dot();
	dot();
	dot();
        delay(200);
}
void C() {
	dash();
	dot();
	dash();
	dot();
        delay(200);
}
void D() {
	dash();
	dot();
	dot();
        delay(200);
}
void E(){
	dot();
        delay(200);
}
void Ff() {
	dot();
	dot();
	dash();
	dot();
        delay(200);
}
void G() {
	dash();
	dash();
	dot();
        delay(200);
}
void H() {
	dot();
	dot();
	dot();
	dot();
        delay(200);
}
void I() {
	dot();
	dot();
        delay(200);
}
void J() {
	dot();
	dash();
	dash();
	dash();
        delay(200);
}
void K() {
	dash();
	dot();
	dash();
        delay(200);
}
void L(){
	dot();
	dash();
	dot();
	dot();
        delay(200);
}
void M() {
	dash();
	dash();
        delay(200);
}
void N() {
	dash();
	dot();
        delay(200);
}
void O() {
	dash();
	dash();
	dash();
        delay(200);
}
void P() {
	dot();
	dash();
	dash();
	dot();
        delay(200);
}
void Q() {
	dash();
	dash();
	dot();
	dash();
        delay(200);
}
void R() {
	dot();
	dash();
	dot();
        delay(200);
}
void S() {
	dot();
	dot();
	dot();
        delay(200);
}
void T() {
	dash();
        delay(200);
}
void U() {
	dot();
	dot();
	dash();
        delay(200);
}
void V() {
	dot();
	dot();
	dot();
	dash();
        delay(200);
}
void W() {
	dot();
	dash();
	dash();
        delay(200);
}
void X() {
	dash();
	dot();
	dot();
	dash();
        delay(200);
}
void Y() {
	dash();
	dot();
	dash();
	dash();
        delay(200);
}
void Z() {
	dash();
	dash();
	dot();
	dot();
        delay(200);
}

void space() {
        delay(400);
}

void one() {
        dot();
        dash();
        dash();
        dash();
        dash();
}

void two() {
        dot();
        dot();
        dash();
        dash();
        dash();
}

void three() {
        dot();
        dot();
        dot();
        dash();
        dash();
}

void four() {
        dot();
        dot();
        dot();
        dot();
        dash();
}

void five() {
        dot();
        dot();
        dot();
        dot();
        dot();
}

void six() {
        dash();
        dot();
        dot();
        dot();
        dot();
}

void seven() {
        dash();
        dash();
        dot();
        dot();
        dot();
}

void eight() {
        dash();
        dash();
        dash();
        dot();
        dot();
}

void nine() {
        dash();
        dash();
        dash();
        dash();
        dot();
}

void zero() {
        dash();
        dash();
        dash();
        dash();
        dash();
}
