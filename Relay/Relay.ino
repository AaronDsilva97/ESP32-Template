// Complete Instructions: https://RandomNerdTutorials.com/esp8266-nodemcu-digital-inputs-outputs-arduino/

// set pin numbers
const int buttonPin = 4;     // the number of the pushbutton pin
const int ledPin =  5;       // the number of the LED pin

// variable for storing the pushbutton status


void setup() {
  Serial.begin(9600);
  // initialize the pushbutton pin as an input
  //  pinMode(buttonPin, INPUT);
  // initialize the LED pin as an output
    pinMode(ledPin, OUTPUT);
}

void loop() {

  digitalWrite(ledPin, HIGH);
  Serial.println("HIGH");
  delay(5000);
  digitalWrite(ledPin, LOW);
  Serial.println("LOW");
  delay(5000);

}
