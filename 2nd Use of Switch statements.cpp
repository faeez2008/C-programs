// Write a C program to make a simple calculator using Swicth statement //
#include<stdio.h>
int main()
{
	char operators;
	float x,y;
	printf("Enter an operator:");
	scanf("%c",&operators);
	
	printf("Enter two numbers:");
	scanf("%f %f",&x, &y);
	
	switch(operators)
	{
		case '+':
			printf("Sum=%.2f",x+y); break;
		case '-':
			printf("Difference=%.2f",x-y); break;
		case '*':
			printf("Product=%.2f",x*y); break;
		case '/':
			printf("Remainder=%.2f",x/y); break;
		default:
			printf("Invalid operator!");
	}
	
	return 0;
}
