int ledPin = 13;
int delayPeriod =500;

void setup() 
{
pinMode (ledPin, OUTPUT);
}
void loop() 
{
int i = 0;
while (i<5)
{
 
  digitalWrite (ledPin, HIGH);
  delay (delayPeriod);
  digitalWrite (ledPin, LOW);
  delay (delayPeriod);
  i++;
  
}
 
 delay (3000); 
}
