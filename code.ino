//SECURITY ALARM USING IR SENSOR

void setup() {
  pinMode(2,INPUT);             // connect IR sensor"s output pin to D2 PIN of arduino
  pinMode(12,OUTPUT);           // connect LED's POSITIVE pin to D12 PIN of arduino
  pinMode(13,OUTPUT);           // connect BUZZER's POSITIVE pin to D13 PIN of arduino
}

void loop() {
  if(digitalRead(2)==1)     
 {
   digitalWrite(12,0);
   digitalWrite(13,0);
 }
 if(digitalRead(2)==0)
 {
   digitalWrite(12,1);
   digitalWrite(13,1);
 }

}
