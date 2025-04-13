// Write a program to find the Multiplication and division of two numbers //
#include<stdio.h>
int main()
{
	float a,b,Mul,Div;
	printf("Enter the first number:");
	scanf("%f",&a);
	printf("Enter the second number:");
	scanf("%f",&b);
	Mul=a*b;
	printf("%6.2f * %6.2f=%6.2f\n",a,b,Mul);
	Div=a/b;
	printf("%6.2f * %6.2f=%6.2f\n",a,b,Div);
	
	return(0);
}
