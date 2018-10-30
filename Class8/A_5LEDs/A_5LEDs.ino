void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  i = random(255);
  analogWrite(5, i);
  i = random(255);
  analogWrite(6, i);
  i = random(255);
  analogWrite(9, i);
  i = random(255);
  analogWrite(10, i);
  i = random(255);
  analogWrite(11, i);
  i = random(255);
  analogWrite(5, i);
  delay(100);
}
