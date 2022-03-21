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
	jarak = (durasi/2) / 29.1; //dalam cm
    
  if (jarak <= 30) {
    	tone(buzzer, 2500);//Suara 2500 Hz
  } else {
    	noTone(buzzer);
  }
}
