void setup() {
	pinMode(13, OUTPUT);
}
void loop() {
J();
E();
R();
O();
M();
E();
  space();
W();
I();
L();
Ff();
R();
E();
D();
  space();
G();
U();
A();
R();
I();
N();
  space();
A();
N();
D();
A();
Y();
A();
  space();
J();
R();
  delay(5000);
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

//Alphabet

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
