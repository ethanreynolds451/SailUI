void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  delay(3000);
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);  
  delay(3000);
}
