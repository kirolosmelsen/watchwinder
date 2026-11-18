#include <Stepper.h>
#define S 2048
#define R 10
#define CL 1600
#define CO 800
#define P 6000
#define C 60000
Stepper w(S,8,10,9,11);
void setup(){
w.setSpeed(R);}
void loop(){
w.step(CL);
m();
delay(P);
w.step(-CO);
m();
delay(P);
static int y=0;
y++;
if(y>=10){
m();
delay(C);
y=0;}}
void m(){
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);}