int ledPin = 13;
int durations[] = {100,200,200,500,500,500,200,200,100};
int delayPeriod = 500;
void setup() 
{
  pinMode (ledPin, OUTPUT);
}

void loop() 
{
  for (int i=0;i<9;i++)
  {
    flash(durations [i]);
  }
  delay(5000);
}
void flash (int delayPeriod)
{
  digitalWrite (ledPin, HIGH);
  delay (delayPeriod);
  digitalWrite (ledPin, LOW);
  delay (delayPeriod);
}

