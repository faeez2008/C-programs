// The programe prints the square of a number //
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	if(n>0)
	{
		printf("The sqaure of %d is %d",n,n*n);
	}
	
	return 0;
}
