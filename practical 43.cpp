// Write a program to print the numbers between 1 and 10 along with an indication of whether each is even or odd.//
#include<stdio.h>
int main()
{
	int x;
	
	for(x=1;x<10;x++)
	{
		if(x%2==0)
		printf("%d is even number\n",x);
		else
		printf("%d is odd number\n",x);
	}
	
	return 0;
}
