int IRSensor = 2; // connect ir sensor to arduino pin 2
int LED = 13; // conect Led to arduino pin 13


void setup() 
{ 
  pinMode (IRSensor, INPUT); // sensor pin INPUT
  pinMode (LED, OUTPUT); // Led pin OUTPUT
}

void loop() {

if(digitalRead(IRSensor)==HIGH){
  digitalWrite(LED,HIGH);
if(millis()==5000){
 digitalWrite(LED,LOW);
}
else{
 digitalWrite(LED,LOW);

}
}
}
