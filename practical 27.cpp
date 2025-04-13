// Write a program to create a simple calculator using switch statement //
#include<stdio.h>
int main()
{
	char op;
	float x,y;
	
	printf("Enter an operator:");
	scanf("%c",&op);
	
	printf("Enter two numbers:");
	scanf("%f %f",&x, &y);
	
	switch(op)
	{
		case '+':
		    printf("%.2f+%.2f=%.2f",x,y,x+y); break;
		case '-':
			printf("%.2f-%.2f=%.2f",x,y,x-y); break;
		case '*':
			printf("%.2f*%.2f=%.2f",x,y,x*y); break;
		case '/':
			printf("%.2f/%.2f=%.2f",x,y,x/y); break;
		default:
			printf("Error occured");
	}
	
	return 0;
}
