//Find circumference of Triangle formula : triangle = a + b + c

#include<stdio.h>

int main(){
	
	double triangle;
	int sideA,sideB,sideC;
	
	printf("Enter the length of side A : ");
	scanf("%d",&sideA);
	
	printf("Enter the length of side  B : ");
	scanf("%d",&sideB);
	
	printf("Enter the length of side C : ");
	scanf("%d",&sideC);
	
	triangle = sideA + sideB + sideC;
	
	printf("perimeter of the triangle with side %d , %d and %d units is %2lf : ",sideA,sideB,sideC,triangle);
}