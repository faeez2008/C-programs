#include<stdio.h>
int main()
{
	int a,k;
	a=3;
	k=1;
	
	while(k<10)
	{
		printf("\n%d\t%d",k,k*a-1);
		k=k+2;
	}
	
	return 0;
}
