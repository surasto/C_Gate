//
difference(){
	cube(size=[90,57,32]);
		translate([2,2,1.9]) cube(size=[86,53,50]);
		translate([-1,4,6.6]) cube(size=[10,9,11]);
		translate([-1,34,6.6]) cube(size=[10,8.5,3.1]);
		translate([-1,34,32-3.6/2]) rotate([0,90,0])cylinder(r=3.6/2, h=10, $fn=50);
		translate([-1,34-3.6/2,32-3.6/2]) cube(size=[10,3.6,10]);
}
difference(){
	translate([-15,0,0]) cube(size=[120,57,2]);
		translate([-15/2,57/2,-1]) cylinder(r=2, h=10, $fn=50);
		translate([15/2+90,57/2,-1]) cylinder(r=2, h=10, $fn=50);

}



translate([17.1,55-2.4,1]) Bolzen();
translate([15.7,4.4,1]) Bolzen();
translate([68.2,9.6,1]) Bolzen();
translate([68.2,37.3,1]) Bolzen();


module Bolzen(){
	cylinder(r=3/2, h=10, $fn=50);
	cylinder(r=3, h=6,center=false, $fn=50);
}