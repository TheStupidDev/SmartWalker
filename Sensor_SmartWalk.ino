int const bagian_pin = 7;
int const bagian_echo = 6;
int const buzzer = 8;

void setup()
{
  pinMode(bagian_pin, OUTPUT);
  pinMode(bagian_echo, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  int durasi, jarak;
  digitalWrite(bagian_pin, HIGH); 
  delay(1);
  digitalWrite(bagian_pin, LOW);
  durasi = pulseIn(bagian_echo, HIGH);
  jarak = (durasi/2) / 29.1; 
    
  if (jarak <= 20) {
      tone(buzzer, 400);
  } else {
      noTone(buzzer);
  }
  delay(60);
}
