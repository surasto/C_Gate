// Felix Animationsbibliothek
// Letzte Änerdung am 27-Apr-16

// Felix globale Variablen


// Felix Funktionen

void dauerGruen() {
  
  wertR=0;
  wertG=255;
  wertB=0;
}

void dauerBlau() {
  wertR=0;
  wertG=0;
  wertB=255;
}

void dauerRot() {
  wertR=255;
  wertG=0;
  wertB=0;
}

// Schaltet alle drei LEDs an
void dauerWeiss() {
  wertR=255;
  wertG=255;
  wertB=255;
}

void Zufall (){
  wertR=random(0,255);
  wertG=random(0,255);
  wertB=random(0,255);
}
