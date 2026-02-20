
void setup()
{
  pinMode(0, OUTPUT); //função de saida do pino 13
}

void loop()
{
  digitalWrite(0, HIGH);
  delay(1000);
  digitalWrite(0, LOW);
  delay(1000);
}