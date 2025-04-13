// Write a program to find whether the number is even or odd //
#include<stdio.h>
int main()
{
	int n;
	printf("Enter an integer:");
	scanf("%d",&n);
	
	if(n%2==0)
	printf("%d is even",n);
	else if(n>0)
	printf("%d is odd",n);
	else
	printf("The entered number is zero");
	return 0;
}
