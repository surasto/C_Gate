// Felix Animationsbibliothek
// Letzte Änerdung am 27-Apr-16

// Felix globale Variablen
unsigned long old_millis_F = 0;
int wechselFarbe_F = 1;    // 1 bedeutet rot; 2 bedeutet grün; 3 bedeutet blau
int richtung_F = 1;

// Felix Funktionen

// Wenn millis() kleiner ist, als der letzte gespeicherte Wert, dann muss es einen Überlauf gegeben haben
void ueberlaufDetect_F() {
  if (millis() < old_millis_F) {
    old_millis_F=0;
  }
}


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

void dauerBlauRot() {
  wertR=255;
  wertG=0;
  wertB=255;
}

void dauerBlauGruen() {
  wertR=0;
  wertG=255;
  wertB=255;
}

void dauerGruenRot() {
  wertR=255;
  wertG=255;
  wertB=0;
}


// Schaltet alle drei LEDs an
void dauerWeiss() {
  wertR=255;
  wertG=255;
  wertB=255;
}

void Zufall (int Zeit) {
  if(millis() > old_millis_F +Zeit) {
    wertR=random(0,2)*100;
    wertG=random(0,2)*100;
    wertB=random(0,2)*100;
    old_millis_F=millis();

  }
}  

void wechsel(int von, int bis) {
   
   if(millis() > old_millis_F + 100) {
     if (wechselFarbe_F == 1) {
       wertG = 0;
       wertB = 0;
       wertR = wertR + richtung_F*10;   //Rot hochfahren
       if (wertR >= 255) richtung_F = -1;
       if (wertR <= 0) {
         richtung_F = 1;
         wechselFarbe_F = 2;
       }
     }
     if (wechselFarbe_F == 2) {
       wertG = wertG + richtung_F;   //Grün hochfahren
       wertB = 0;
       wertR = 0;
       if (wertG >= 255) richtung_F = -1;
       if (wertG <= 0) {
         richtung_F = 1;
         wechselFarbe_F = 3;
       }
     }
     if (wechselFarbe_F == 3) {
       wertG = 0;  
       wertB = wertB + richtung_F;    //Blau hochfahren
       wertR = 0;
       if (wertB >= 255) richtung_F = -1;
       if (wertB <= 0) {
         richtung_F = 1;
         wechselFarbe_F = 1;
     }

     old_millis_F = millis();
   }
  }
}

void FadeBlau(int von, int bis) {
   
   if(millis() > old_millis_F + 100) {
       wertG = 0;  
       wertB = wertB + richtung_F;    //Blau hochfahren
       wertR = 0;
       if (wertB >= 255) richtung_F = -1;
       if (wertB <= 0) {
         richtung_F = 1;
       }
     old_millis_F = millis();
   }
}


void FadeRot(int von, int bis) {
   
   if(millis() > old_millis_F + 100) {
       wertG = 0;
       wertB = 0;
       wertR = wertR + richtung_F*10;   //Rot hochfahren
       if (wertR >= 255) richtung_F = -1;
       if (wertR <= 0) {
         richtung_F = 1;
       }
     old_millis_F = millis();
   }
}


void FadeGruen(int von, int bis) {
   
   if(millis() > old_millis_F + 100) {
       wertG = wertG + richtung_F;   //Grün hochfahren
       wertB = 0;
       wertR = 0;
       if (wertG >= 255) richtung_F = -1;
       if (wertG <= 0) {
         richtung_F = 1;
       }

     old_millis_F = millis();
   }
}











