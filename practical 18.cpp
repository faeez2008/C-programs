// Write a program to find table of a number //
#include<stdio.h>
int main()
{
	int n,l,x;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Enter the length of the table:");
	scanf("%d",&l);
	
	for(x=1;x<=l;x++)
	printf("%d*%d=%d\n",n,x,n*x);
	
	return 0;
}
