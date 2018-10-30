String foo = "";
int pos1 = 0;
int pos2 = 0;
int pos3 = 0;
int pos4 = 0;
int pos5 = 0;
int val1 = 0;
int val2 = 0;
int val3 = 0;
int val4 = 0;
int val5 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(Serial.available()>0) // HEY! GOT ANY DATA?!
  {
    foo = Serial.readStringUntil('\n');
    pos1 = foo.indexOf(" ");
    val1 = foo.substring(0, pos1).toInt();
    pos2 = foo.indexOf(" ", pos1+1);
    val2 = foo.substring(pos1+1, pos2).toInt();
    pos3 = foo.indexOf(" ", pos2+1);
    val3 = foo.substring(pos2+1, pos3).toInt();
    pos4 = foo.indexOf(" ", pos3+1);
    val4 = foo.substring(pos3+1, pos4).toInt();
    pos5 = foo.indexOf("\n", pos4+1);
    val5 = foo.substring(pos4+1, pos5).toInt();
    
  }

//  Serial.print(val1);
//  Serial.print(" ");
//  Serial.print(val2);
//  Serial.print(" ");
//  Serial.print(val3);
//  Serial.print(" ");
//  Serial.print(val4);
//  Serial.print(" ");
//  Serial.println(val5);
  
  analogWrite(5, val1);
  analogWrite(6, val2);
  analogWrite(9, val3);
  analogWrite(10, val4);
  analogWrite(11, val5);
  delay(5);
}
