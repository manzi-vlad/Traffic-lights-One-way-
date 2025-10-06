int redLED=4;
int yellowLED=2;
int greenLED=5;


void setup() {
  pinMode(redLED,OUTPUT);
  pinMode(yellowLED,LOW);
  pinMode(greenLED,LOW);
}

void loop() {

  digitalWrite(redLED,HIGH);
  digitalWrite(yellowLED,LOW);
  digitalWrite(greenLED,LOW);
  delay(5000);


  digitalWrite(redLED,LOW);
  digitalWrite(yellowLED,HIGH);
  digitalWrite(greenLED,LOW);
  delay(1500);


  digitalWrite(redLED,LOW);
  digitalWrite(yellowLED,LOW);
  digitalWrite(greenLED,HIGH);
  delay(5000);

 

}
