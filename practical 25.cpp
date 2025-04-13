// Write a program to find the sum of odd numbers up 100 //
#include<stdio.h>
int main()
{
	int n,sum;
	sum=0;
	
	for(n=1;n<=100;n=n+2)
	sum=sum+n;
	printf("Sum =%d",sum);
	
	return 0;
}
