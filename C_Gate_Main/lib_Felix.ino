// Felix Animationsbibliothek
// Letzte Änerdung am 27-Apr-16

// Felix globale Variablen
unsigned long old_millis_F = 0;

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

void Zufall (){;
  if(millis() > old_millis_F +1000) {
    wertR=random(0,2)*100;
    wertG=random(0,2)*100;
    wertB=random(0,2)*100;
    old_millis_F=millis();
  }
}
