#define BUTTON PC13
bool state = false;

void setup() {
Serial.begin(9600);
pinMode(BUTTON, INPUT_PULLUP);
}

void loop() {
if (digitalRead(BUTTON) == LOW && state != true) {
Serial.println("Button Pressed");
delay(500);
state = true;
}
if (digitalRead(BUTTON) == HIGH && state != false) {
Serial.println("Button Released");
delay(500);
state = false;
}
}

