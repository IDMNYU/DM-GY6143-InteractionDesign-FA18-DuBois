
// this runs once:
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // turns on the serial - 9600 is the baud rate
}

void loop() {
  // SERIAL OUT FROM ARDUINO TO COMPUTER:
  int val = analogRead(A0); // read the pin A0 and store it into 'val'
  Serial.println(val); // send the 'val' down the serial line

  delay(5);
}
