int pompePin = 5; 

void setup()
{
pinMode(pompePin, OUTPUT);
digitalWrite(pompePin, LOW);
}

void loop()
{
digitalWrite(pompePin, HIGH);
delay(2000);
digitalWrite(pompePin, LOW);
delay(2000);
}
