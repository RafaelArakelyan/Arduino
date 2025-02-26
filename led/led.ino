  const int buttonPin = 3;
  const int ledPin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  digitalWrite(ledPin, HIGH);

}

void loop() {
  while (digitalRead(buttonPin) == HIGH){};

  if(digitalRead(ledPin) == HIGH)
    digitalWrite(ledPin, LOW);
  else
    digitalWrite(ledPin, HIGH);
  while(digitalRead(buttonPin) == LOW){}

}

