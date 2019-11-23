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
    for(i = 2; i< 8; i++) {
      digitalWrite(i, HIGH);
      delay(2000);
    }
  }  
} 
