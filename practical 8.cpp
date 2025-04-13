// Write a program to compare two integers using if()-else statements.//
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a, &b);
	
	if(a>b)
	printf("%d is the greatest integer value\n",a);
	else
	printf("%d is the greatest integer value\n",b);
	
	return 0;
}
