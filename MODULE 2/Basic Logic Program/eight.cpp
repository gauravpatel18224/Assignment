//Find circumference of Rectangle formula : C = 4 * a
#include<stdio.h>
int main(){
	
	double  circumference;
	double side;
	
	printf("Enter the length of one side of the rectangle : ");
	scanf("%lf",&side);
	
	 circumference = 4 * side;
	 
	 printf(" Perimeter of the rectangle with side %2lf circumference of rectangle  is %2lf", side,circumference);
}