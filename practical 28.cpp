// Write a Program to find the factorial of a number.//
#include<stdio.h>
int main()
{
	int fact,x,n;
	fact=1;
	printf("Enter a number:");
	scanf("%d",&n);
	
	for(x=1;x<=n;x++)
	fact=fact*x;
	
	printf("The factorial of %d is %d\n",n,fact);
	
	return 0;
}
