//Find area of Triangle Formula : A = 1/2 × b × h
#include <stdio.h>

int main(){
	
	double base,hight;
	double area;
	
	printf("Enter the length of base of triangle : ");
	scanf("%lf",&base);
	
	printf("Enter the hight of triangle : ");
	scanf("%lf",&hight);
	
	area = 0.5 * base * hight;
	
	printf("length of triangle %2lf units and higth %2lf units of %2lf : ",base,hight,area);
}
