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


void setup() {
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(13,OUTPUT);
  wertR =0; wertG=0; wertB=0;   // Alle LEDs aus  
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
  }

  digitalWrite(13,wertR);  // Hier werden die Werte geschrieben
  digitalWrite(11,wertB);
  digitalWrite(10,wertG);

  delay(50);  
}
