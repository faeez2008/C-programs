// Write a program to find GCD //
#include<stdio.h>
int main()
{
	int a,b,small,rem1,rem2,j,gcd;
	printf("Entere two numbers:");
	scanf("%d %d",&a, &b);
	
	if(a<b)
	small=a;	
	else
	small=b;
	for(j=1;j<=small;j++)
	{
		rem1=a%j;    rem2=b%j;
		if((rem1==0)&&(rem2==0))
		gcd=j;
	}
	printf("\nGCD=%d",gcd);
	
	return 0;
}
