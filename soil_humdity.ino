int soil = A1;
int val = 0;
int led = 13;
void setup() {
  pinMode(soil,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);

}

void loop() {
val = analogRead(soil);
Serial.println(val);
delay(100);


if(val>850){
  digitalWrite(led,HIGH);
}
else{
  digitalWrite(led,LOW);
}
delay(100);

} 

 

 
