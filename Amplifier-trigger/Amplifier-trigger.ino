int i = 0;
int buttonState = 0;
const int buttonPin = 8;

void setup() {
  Serial.begin(9600);
  for(i = 2; i < 8; i++) {
    pinMode(i, OUTPUT);
  }
    pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if(buttonState == HIGH) {
    digitalWrite(2, HIGH);
    delay(2000);
    digitalWrite(3, HIGH);
    delay(2000);
    digitalWrite(4, HIGH);
    delay(2000);
    digitalWrite(5, HIGH);
    delay(2000);
    digitalWrite(6, HIGH);
    delay(2000);
    digitalWrite(7, HIGH);
    delay(2000);
  }
  
  
} 
