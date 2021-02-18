int sound_analog = 34;
int i = 0;
void setup() {
  Serial.begin(115200);
  pinMode(sound_analog, INPUT);
}

void loop() {
  int val_analog = analogRead(sound_analog);

  if (val_analog > 1000) {
    delay(1);
  }
  else if (val_analog < 1000) {
    i++;
    Serial.print(i);
    Serial.println("Sound detected");
  }
  delay(10);
}
