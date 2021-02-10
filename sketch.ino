const int ButtonPin = 5;

class LED {
private:
  int PIN;
  
public:

  LED(int PIN) {
    this->PIN = PIN;
    pinMode(this->PIN, OUTPUT);
  }

  void set_voltage(int voltage) {
    digitalWrite(PIN, voltage);
  }
};


LED led = LED(2);

void setup() {
  pinMode(ButtonPin, INPUT_PULLUP);
}

void loop() {
  int buttonState = digitalRead(ButtonPin);
  if (buttonState == HIGH) {
    led.set_voltage(HIGH);
  }
  else {
    led.set_voltage(LOW);
  }
}
