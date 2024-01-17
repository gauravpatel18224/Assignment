//Find Area of Cube formula : a = 6a2
#include <stdio.h>

int main(){
	
	double side;
	double surface;
	
	printf("Enter of the length of one  side cube : ");
	scanf("%lf",&side);
	
	surface = 6 * side * side;
	
	printf("surface of the cube with side %2lf units of %2lf ",side,surface);
	
}