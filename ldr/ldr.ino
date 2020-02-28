const int buzzPin = 7;

const int ldrPin = A0;

void setup() {

Serial.begin(9600);

pinMode(buzzPin, OUTPUT);

pinMode(ldrPin, INPUT);

}

void loop() {

int ldrStatus = analogRead(ldrPin);

if (ldrStatus <= 350) {

digitalWrite(buzzPin, HIGH);

Serial.println(ldrStatus);
delay(1000);

} else
{

digitalWrite(buzzPin, LOW);
Serial.println(ldrStatus);
delay(1000);
}

}
