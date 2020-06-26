int ledPin = 13;
int delayPeriod =500;
int count = 0;
void setup() 
{
pinMode (ledPin, OUTPUT);
}
void loop() 
{
  digitalWrite (ledPin,HIGH);
  delay (delayPeriod);
  digitalWrite (ledPin,LOW);
  delay (delayPeriod);
  count++;    //count++ means count = count +1
  if (count==5)
  {
    count=0;
    delay (3000);
  }
}
