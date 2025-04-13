// Write a program that reads a number and prints it,s table using while loop //
#include<stdio.h>
int main()
{
	int n,k=1;
	printf("Enter a number:");
	scanf("%d",&n);

	while(k<=10)
	{
		printf("%d*%d=%d\n",n,k,n*k);
		k++;
    }
	return 0;
}
