int buzzer =7;

void setup()
{
pinMode(buzzer,OUTPUT);
}

void loop()
{
int i;

  while(1)
  {
  
    for(i=0; i<80; i++)
    {
      digitalWrite(buzzer, HIGH);
      delay(2000);
      digitalWrite(buzzer, LOW);
      delay(2000);
    }
  }
}
