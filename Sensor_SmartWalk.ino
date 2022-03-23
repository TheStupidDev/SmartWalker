int const bagian_pin = 7;
int const bagian_echo = 6;
int const buzzer = 8;
int const vibrator = 13;

void setup()
{
  pinMode(bagian_pin, OUTPUT);
  pinMode(bagian_echo, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(vibrator, OUTPUT);
}

void loop()
{
  int durasi, jarak;
  digitalWrite(bagian_pin, HIGH); 
  delay(1);
  digitalWrite(bagian_pin, LOW);
  durasi = pulseIn(bagian_echo, HIGH);
  jarak = (durasi/2) / 29.1; //dalam cm
    
  if (jarak <= 35) {
      tone(buzzer, 2500);
      analogWrite(vibrator, 255);
    
  } else {
      noTone(buzzer);
      analogWrite(vibrator, 0);
  }
}
