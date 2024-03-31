//WAP to Find Area And Circumference of Circle


#include<stdio.h>
#include<math.h>

int main(){
	
	double area,radius,cir;
	float PI=3.14;
	
	printf("Enter the radius of circle :");
	scanf("%lf",&radius);
	
	area = PI * radius * radius;
	cir = 2 * PI * radius;
	
	printf(" area of circle :  %2lf\n",area);
	printf("cir of circle : %2lf\n",cir);
}