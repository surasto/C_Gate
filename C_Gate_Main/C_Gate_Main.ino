//////////////////////////////////////////////
// Hauptprogramm des C_Gate Projekts
// Geschrieben von Ralf
// Braucht die Libraries:
//     lib_David;
//     lib_Felix;
/////////////////////////////////////////////

// Globale Variablen 
int mode = 4;              // Animationsmodus
int wertR, wertG, wertB;   // Helligkeit des drei LEDs
long cm;

void setup() {
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(13,OUTPUT);
  wertR =0; wertG=0; wertB=0;   // Alle LEDs aus  

  Serial.begin(9600);  // Für Debugging
}

void loop() {
  switch (mode) {
    case 0: dauerGruen();
            break;
    case 1: dauerRot();
            break;
    case 2: dauerBlau();
            break;
    case 3: Terror();
            break;
    case 4: Lauflicht();
            break;
    case 5: Zufall(1000);
            break;
  }

  digitalWrite(13,wertR);  // Hier werden die Werte geschrieben
  digitalWrite(11,wertB);
  digitalWrite(10,wertG);

  cm = Abstand();

  // Serial.println(cm);  
}
