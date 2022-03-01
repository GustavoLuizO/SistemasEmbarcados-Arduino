#define ledverm 13
#define ledamar 12
#define ledverd 8
#define tempo 10000

void setup()
{
  pinMode(ledverm, OUTPUT);
  pinMode(ledverd, OUTPUT);
  pinMode(ledamar, OUTPUT);
}

void loop()
{
  digitalWrite(ledverm, HIGH);
  delay(tempo);               
  digitalWrite(ledverm, LOW);    
  digitalWrite(ledamar, HIGH);
  delay(tempo);
  digitalWrite(ledamar, LOW);
  digitalWrite(ledverd, HIGH);
  delay(tempo);
  digitalWrite(ledverd, HIGH);
  
}
