// Example of nested if else selection structure //
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
if(n>0)
    {
	printf("%d is a positive number\n",n);

		if(n%2==0)
		printf("%d is an even number\n",n);
		else
		printf("%d is an odd number\n",n);
	}
else
    printf("%d is a negative number\n",n);
    
    return 0;
}
