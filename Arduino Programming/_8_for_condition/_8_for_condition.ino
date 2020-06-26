int ledPin = 13;
int delayPeriod =500;
void setup() 
{
pinMode (ledPin, OUTPUT);
}
void loop() 
{
  for (int i=0; i<5 ; i++)  
  {
  digitalWrite (ledPin,HIGH);
  delay (delayPeriod);
  digitalWrite (ledPin,LOW);
  delay (delayPeriod);
  
  }
  delay (3000);
}
