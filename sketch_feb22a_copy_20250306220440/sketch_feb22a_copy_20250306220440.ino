  const int buttonPin = 3;
  const int ledPin = 8;
  volatile int buttonState = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  digitalWrite(ledPin, HIGH);

  attachInterrupt(digitalPinToInterrupt(buttonPin), pinISR, CHANGE);
}

void loop() {
  // put your main code here, to run repeatedly:
  // buttonState = digitalRead(buttonPin);
  // digitalWrite(ledPin, buttonState);

}


void pinISR(){
  buttonState = digitalRead(buttonPin);
  digitalWrite(ledPin, buttonState);
}
