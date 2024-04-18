// C++ code
//
int luminosidade = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop()
{
  luminosidade = analogRead(A0);
  Serial.println(luminosidade);
  if (luminosidade >= 336) {
    digitalWrite(9, LOW);
  } else {
    digitalWrite(9, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}