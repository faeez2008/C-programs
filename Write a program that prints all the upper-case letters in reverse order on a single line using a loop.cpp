// Write a program that prints all the upper-case letters in reverse order on a single line using a loop //
#include<stdio.h>
int main()
{
	int n;
	n=90;
	while(n>=65)
	{
		printf("%c ",n);
		n=n-1;
	}
	
	return 0;
}
