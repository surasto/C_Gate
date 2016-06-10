//Hülle

// Haupt Box
difference(){
		cube(size=[94,58,35]);
		translate([2,2,1.9]) cube(size=[90,54,50]);  // Innenmaß
		translate([-1,4,17]) cube(size=[10,9,11]);
		translate([-1,34,17]) cube(size=[10,8.5,3.1]);
		translate([-1,34,32-3.6/2]) rotate([0,90,0]) cylinder(r=3.6/2, h=10, $fn=50);
		translate([-1,34-3.6/2,32-3.6/2]) cube(size=[10,3.6,10]);
}

// Grundplatte mit Befestigungslöchern
difference(){
	translate([-15,0,0]) cube(size=[124,58,2]);
		translate([-15/2,57/2,-1]) cylinder(r=2, h=10, $fn=50);
		translate([15/2+94,57/2,-1]) cylinder(r=2, h=10, $fn=50);

}

// Rahmen für Ultraschallsensoren
difference(){
	translate([75.3,6,0]) cube(size=[15,45,30]);
	translate([77.3,8,0]) cube(size=[11,41,31]);
}

translate([17.1,55-2.4,1]) Bolzen();
translate([15.7,4.4,1]) Bolzen();
translate([68.2,9.6,1]) Bolzen();
translate([68.2,37.3,1]) Bolzen();


module Bolzen(){
	cylinder(r=3/2, h=10, $fn=50);
	cylinder(r=3, h=6,center=false, $fn=50);
}

//Deckel

rotate([180,0,0]) translate([150,0,0]) deckel();


module deckel(){
	difference(){
			union(){
				translate([0,0,32]) cube(size=[94,58,2]);
				translate([2,2,30]) cube(size=[90,58-4,2]);
			}
			translate([78,12,26]) cylinder(r=8, h=10);
			translate([78,38,26]) cylinder(r=8, h=10);
			translate([4,4,30]) cube(size=[65,50,2]);
			translate([22,22,30]) cube(size=[65,6,2]);
			translate([22,48,30]) cube(size=[65,6,2]);
	}
}
//28 mm hoch arduino
//17 mm hoch bolzen0
//36 mm spielraum
//53 mm hoch box
//9 mm hoch U-sensor

//arduino + bolzen = 45 mm

//13 mm hoch U
//20 mm




