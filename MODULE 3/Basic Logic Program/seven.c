//. Find area of Rectangle Formula : A=wl
#include <stdio.h>
int main(){
	
	double width,length;
	double area;
	
	printf("Enter of the width of rectangle : ");
	scanf("%lf",&width);
	
	printf("Enter of the length of rentangle : ");
	scanf("%lf",&length);
	
	area = width * length;
	
	printf("area of rentangl with width %2lf units and higth %2lf units is %2lf : ",width,length,area);
	
}