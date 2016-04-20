// Davids Animationsbibliothek

// Davids globale Variablen
unsigned long old_millis_D = 0;

// Davids Funktionen


//_____________Terror____________


void Terror() {
    if(millis() > old_millis_D +10){
     if(wertR < 100) wertR = 255; else wertR = 0;
     if(wertG < 100) wertG = 255; else wertG = 0;
     if(wertB < 100) wertB = 255; else wertB = 0;
     
     old_millis_D = millis();
     } 
}


