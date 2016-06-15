//////////////////////////////////////////////
// Hauptprogramm des C_Gate Projekts
// Geschrieben von Ralf
// Braucht die Libraries:
//     lib_David;
//     lib_Felix;
/////////////////////////////////////////////

// Globale Variablen 
int mode = 0;              // Animationsmodus
int wertR, wertG, wertB;   // Helligkeit des drei LEDs
long cm;
unsigned long lastEvent;

void setup() {
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(13,OUTPUT);
  wertR =0; wertG=0; wertB=0;   // Alle LEDs aus  
  lastEvent = 0;
  
  Serial.begin(9600);  // Für Debugging
}

void loop() {
  switch (mode) {
    case 0: off();
            break;
    case 1: dauerRot();
            break;
    case 2: dauerBlau();
            break;
    case 3: Terror();
            break;
    case 4: Lauflicht(100);
            break;
    case 5: Lauflicht(400);
            break;
    case 6: Lauflicht(800);
            break;
    case 7: Lauflicht(1600);
            break;
    case 8: Zufall(1000);
            break;
    case 9: Zufall(400);
            break;
    case 10: wechsel(1,1600);
            break;
    case 11: dauerBlauRot();
            break;    
    case 12: dauerBlauGruen();
            break;    
    case 13: dauerGruenRot();
            break;    
    case 14: FadeGruen(1,1600);
            break;
    case 15: FadeRot(1,1600);
            break;
    case 16: FadeBlau(1,1600);
            break;
    case 17: dauerGruen();
            break;

  }

  analogWrite(13,wertR);  // Hier werden die Werte geschrieben
  analogWrite(11,wertB);
  analogWrite(10,wertG);

  cm = Abstand();
  Serial.print("Mode = ");
  Serial.println(mode); 
 

  if (cm < 50) {
    mode++;
    lastEvent = millis();
  }
  if (mode>16) mode=1;

  // Wenn seit 10 min (= 600.000 ms) keine mehr durch die Tür gegangen ist, wird abgeschaltet
  if (millis() > lastEvent + 600000) mode = 0;
  
  
  // Nach 50 Tagen läuft der millis() counter über. Hier wird damit umgegangen
  ueberlaufDetect_F();
  ueberlaufDetect_D();

}


// Alles ausschalten
void off() {
  wertR=0;
  wertG=0;
  wertB=0;
}




