// Write a program to fina a sequence of odd numbers up to a given number //
#include<stdio.h>
int main()
{
	int n,k;
	printf("Enter a number:");
	scanf("%d",&n);
	
	printf("Odd numbers to the given numbers are:\n");
	
	for(k=1;k<=n;k=k+2)
	printf("%d\t",k);
	
	return 0;
}
