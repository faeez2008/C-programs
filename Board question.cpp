#include<stdio.h>
int main()
{
	int n,sum=0;
	for(n=1;n<=10;n=n+2)
	{
		sum=sum+n;
		printf("%d\t",n);
	}
	
	return 0;
}
