int GreenLed = 12;
int RedLed = 6;

void setup() {
  Serial.begin(9600);
  pinMode(GreenLed, OUTPUT);
  pinMode(RedLed, OUTPUT);
}

void loop() {
  if(Serial.available() > 0){
    String msg = Serial.readStringUntil('\n');
    msg.trim();
    if(msg == "Red"){
      digitalWrite(RedLed, HIGH);
      digitalWrite(GreenLed, LOW);
    } 
    else if(msg == "Green") {
      digitalWrite(GreenLed, HIGH);
      digitalWrite(RedLed, LOW);
    } else {
      digitalWrite(GreenLed, LOW);
      digitalWrite(RedLed, LOW);
    }
  }

}
