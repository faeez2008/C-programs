// Write a C program using While loop to print ASCII values //
#include<stdio.h>
int main()
{
	int n;
	n=32;
	printf("\n");
	while(n<=255)
	{
	printf("%3d=%c ",n,n);
	n++;
    }   
	
	return 0;
}
