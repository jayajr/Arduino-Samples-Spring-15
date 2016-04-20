#include <Bridge.h>
#include <Console.h>
#include <FileIO.h>
#include <HttpClient.h>
#include <Mailbox.h>
#include <Process.h>
#include <YunClient.h>
#include <YunServer.h>

int incomingByte = 0;
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
  Bridge.begin();
  Console.begin();
}

void loop() {
  if (Console.available() > 0) {
    incomingByte=Console.read();
    Console.println(incomingByte);
    if (incomingByte == '.'){
      dot();
    }
    if (incomingByte == '-'){
      dash();
    }
    if (incomingByte == ' '){
      space();
    }
    if (incomingByte == '/'){
      slash();
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

void space() {
  delay(200);
}

void slash() {
  delay(600);
}
