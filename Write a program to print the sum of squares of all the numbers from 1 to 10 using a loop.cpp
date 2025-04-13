// Write a program to print the sum of squares of all the numbers from 1 to 10 using a loop //
#include<stdio.h>
int main()
{
	int square,n,sum;
	sum=0;
	for(n=1;n<=10;n++)
	{
	square=n*n;
	sum=sum+square;
    }
	printf("The sum of square of all the number is %d",sum);
	
	return 0;
	
}
