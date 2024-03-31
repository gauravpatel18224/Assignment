//Find Area of Square formula : a = a2

#include<stdio.h>

int main(){
	
	double area,side;
	
	printf("Enter side of the length of the squre : ");
	scanf("%lf",&side);
	
	area = side * side;
	
	printf("area of squre is : %2lf",area);
}