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

void Lauflicht() {
     if(millis() > old_millis_D +50){
      
       if(wertR > 100) {
        wertR = 0; 
        wertG = 255; 
        wertB = 0;
       }
       else if(wertG > 100) {
        wertR = 0;
        wertG = 0;
        wertB = 255;
       } 
       else {
        wertR = 255; 
        wertG = 0;
        wertB = 0;
       }
      
      old_millis_D = millis();
     }
}
    
