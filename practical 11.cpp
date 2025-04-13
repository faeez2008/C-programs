// Write a program to find if a given number is postive or negative //
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	if(n<0)
	printf("%d is negative",n);
	else if(n>0)
	printf("%d is positive",n);
	else
	printf("The entered number is zero");
	return 0;
}
