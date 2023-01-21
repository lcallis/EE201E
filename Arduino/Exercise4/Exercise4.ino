void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // g (center)  -> 8
  // f (top left side) -> 10
  // a (top center) -> 11
  //  b (top right) -> 13
  // e (bottom left) -> 7
  // d (bottom center) -> 5
  // c (bottom right) -> 2
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(11, LOW);
  digitalWrite(7, HIGH);
  delay(1500);

  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(11, LOW);
  digitalWrite(7, LOW);
  delay(1500);

  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(2, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(7, HIGH);
  delay(1500);

  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(11, LOW);
  digitalWrite(7, LOW);
  delay(1500);

  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(11, LOW);
  digitalWrite(7, HIGH);
  delay(1500);

  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
  digitalWrite(2, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(7, HIGH);
  delay(1500);

  digitalWrite(8, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(11, LOW);
  digitalWrite(7, HIGH);
  delay(1500);

digitalWrite(8, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(11, LOW);
  digitalWrite(7, HIGH);
  delay(1500);

  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(7, LOW);
  delay(1500);

  digitalWrite(8, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(11, LOW);
  digitalWrite(7, LOW);
  delay(1500);
}
