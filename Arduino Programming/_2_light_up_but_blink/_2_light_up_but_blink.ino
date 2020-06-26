void setup() 
{
  pinMode (13,OUTPUT);
}

void loop() 
{
  digitalWrite(13, HIGH);
  delay (1000);               //1000 means 1 seccond
  digitalWrite(13, LOW);
  delay (1000);
}
