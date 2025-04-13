// Chapter 4:Conditional Control Structure (lab activity 1) //
// Write a program that reads a number and prints its square if it is greater than 10 //
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	if(n>10)
	{
	printf("The square of %d is %d",n,n*n);
	}

	return 0;
}
