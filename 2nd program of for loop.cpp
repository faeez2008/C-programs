// Chapter5:loop control structure //
// Write a program to print a table of a given number by using for loop. //
#include<stdio.h>
int main()
{
	int n,k;
	printf("Enter a number:");
	scanf("%d",&n);
	
	for(k=1;k<=10;k++)
	printf("%d*%d=%d\n",n,k,n*k);
	
	return 0;
}
