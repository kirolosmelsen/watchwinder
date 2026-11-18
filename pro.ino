#include <AccelStepper.h>
AccelStepper w(AccelStepper::FULL4WIRE,8,10,9,11);
long t=1600;
void setup(){
w.setMaxSpeed(1000);
w.setAcceleration(100);}
void loop(){
w.setCurrentPosition(0);
w.moveTo(t);
while(w.distanceToGo()!=0){
w.run();}
m();
delay(6000);
w.setCurrentPosition(0);
w.moveTo(t);
while(w.distanceToGo()!=0){
w.run();}
m();
delay(6000);
w.setCurrentPosition(0);
w.moveTo(-t);
while(w.distanceToGo()!=0){
w.run();}
m();
delay(6000);
static int y=0;
y++;
if(y>=7){
delay(60000);
y=0;}}
void m(){
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);}