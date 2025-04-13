// Write a program to find the factorial of a given number using for loop //
#include<stdio.h>
int main()
{
	int n,k,fact;
	fact=1;
	printf("Enter a number:");
	scanf("%d",&n);
	
	for(k=1;k<=n;k++)
	fact=fact*k;
	printf("The factorial of %d is %d",n,fact);
	
	return 0;
}
