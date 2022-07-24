//Iaçá Alarme
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, INPUT);
  pinMode(9, OUTPUT);
}
void loop()
{
  digitalWrite(7, HIGH);
  delayMicroseconds(10);
  digitalWrite(7, LOW);
  
  int time = pulseIn(6, HIGH);
  int distancia = time * 0.034 / 2;
  
  if (distancia >= 160 || distancia <= 0)
  {
    digitalWrite(9, LOW);
  }
  
  else
  {
    tone(9, 500, 10);
  }
}