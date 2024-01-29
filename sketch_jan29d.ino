

void setup() {
  Serial.begin(9600);
  for(int i=4;i<=6;i++)
  {
    pinMode(i,OUTPUT);
  }

}

void loop() {
  for(int i=4;i<=6;i++)
  {
    digitalWrite(i,HIGH);
    delay(50);
    digitalWrite(i,LOW);
    delay(50);
  }
  
  

}
