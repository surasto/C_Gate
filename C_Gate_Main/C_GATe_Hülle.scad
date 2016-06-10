//Hülle und Deckel

// Haupt Box
difference(){
		cube(size=[94,58,35]);
		translate([2,2,1.9]) cube(size=[90,54,50]);  // Innenmaß
		translate([-1,5.5,8]) cube(size=[10,10,12]); //(1.5mm nach links, 1mm breiter, 1mm höher, 8mm tiefer
		translate([-1,37,8]) cube(size=[10,8.5,3.1]);  //3mm nach links, tiefer (gleich wie großes Loch
		translate([-1,34,32-3.6/2]) rotate([0,90,0]) cylinder(r=3.6/2, h=10, $fn=50);
		translate([-1,34-3.6/2,32-3.6/2]) cube(size=[10,3.6,10]);
		translate([45,-10,30]) rotate([-90,0,0]) cylinder(r=1.5, h=120, $fn=50);
}

// Grundplatte mit Befestigungslöchern
difference(){
	translate([-15,0,0]) cube(size=[124,58,2]);
		translate([-15/2,57/2,-1]) cylinder(r=2, h=10, $fn=50);
		translate([15/2+94,57/2,-1]) cylinder(r=2, h=10, $fn=50);

}

// Rahmen für Ultraschallsensoren (5mm tiefer)
difference(){
	translate([75.3,6,0]) cube(size=[15,45,25]);
	translate([77.3,8,2]) cube(size=[11,41,26]);
}


translate([17.1,55-2.4,1]) Bolzen();
translate([15.7,4.4,1]) Bolzen();
translate([68.2,9.6,1]) Bolzen();
translate([68.2,37.3,1]) Bolzen();


module Bolzen(){
	cylinder(r=2.6/2, h=10, $fn=50);
	cylinder(r=3, h=6,center=false, $fn=50);
}

//Deckel

rotate([180,0,0]) translate([0,10,-34]) deckel();


module deckel(){
	difference(){
			union(){
				translate([0,0,32]) cube(size=[94,58,2]);
				translate([2,2.25,30]) cube(size=[90,58-4.5,2]);
			}
			translate([78,(58-26)/2,26]) cylinder(r=8, h=10);
			translate([78,(58-26)/2+26,26]) cylinder(r=8, h=10);
			translate([4,4,29]) cube(size=[65,50,3]);
			translate([22,26,29]) cube(size=[65,6,3]);
	}

   //Haltelaschen
   translate([40,2.25,25]) cube(size=[10,2,6]);
   translate([40,56-2.25,25]) cube(size=[10,2,6]);

}
//28 mm hoch arduino
//17 mm hoch bolzen0
//36 mm spielraum
//53 mm hoch box
//9 mm hoch U-sensor

//arduino + bolzen = 45 mm

//13 mm hoch U
//20 mm




