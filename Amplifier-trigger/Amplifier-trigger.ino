void setup() {
  Serial.begin(57600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
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
