/*Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo)*/

#include<stdio.h>

int main(){
	
	int num1,num2,add,mul,sub;
	float div;
	
	printf("Enter first numbers : ");
	scanf("%d",&num1);
	
	printf("Enter second number :" );
	scanf("%d",&num2);
	
	add = num1+num2;
	mul = num1*num2;
	sub = num1-num2;
	div = num1/num2;
	
	printf("addition of two numbers : %d\n",add);
	printf("mul of two numbers : %d\n",mul);
	printf("sub of two numbers : %d\n",sub);
	printf("div of two numbers : %d\n",div);
}