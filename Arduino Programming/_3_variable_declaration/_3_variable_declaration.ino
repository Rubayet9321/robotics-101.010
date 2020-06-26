int ledPin=13;
int delayPeriod=1000;
void setup() 
{
  pinMode (ledPin,OUTPUT);
}

void loop() 
{
  digitalWrite(ledPin, HIGH);
  delay (delayPeriod);               //1000 means 1 seccond
  digitalWrite(ledPin, LOW);
  delay (delayPeriod);
}
