// Write a program to print the sum of even numbers from 1 to 50 //
#include<stdio.h>
int main()
{
	int n,sum;
	sum=0;
	for(n=2;n<=50;n=n+2)
	{
	sum=sum+n;
    }
	printf("Sum=%d",n);
		
	return 0;
}
