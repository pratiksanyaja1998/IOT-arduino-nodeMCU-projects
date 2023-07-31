void setup() {
  // put your setup code here, to run once:
  pinMode(D2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(D2, HIGH);
  delay(5000);
  digitalWrite(D2, LOW);
  delay(5000);

}
