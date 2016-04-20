// Ultraschall Sensor Library

const int pingPin = A1;
const int start_signal = A0;

long Abstand() {
  long duration, cm;

  pinMode(pingPin,OUTPUT);     // Pins vorbereiten
  pinMode(start_signal,OUTPUT);
  digitalWrite(start_signal,HIGH);
  delayMicroseconds(20);

  digitalWrite(start_signal,LOW);  // Starte Messung mit fallender Flanke
  digitalWrite(pingPin,LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin,HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin,LOW);
  pinMode(pingPin,INPUT);

  duration = pulseIn(pingPin,HIGH);  // Messung der Verzögerung bis Echo
  cm = duration / 29 / 2 ;
  
  //Serial.print(cm);        // Nur für Debug
  //Serial.println("cm");
  delay(50);
  return cm;
}


