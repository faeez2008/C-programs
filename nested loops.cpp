// Nested-loops and their programs //
#include<stdio.h>
int main()
{
	int k,j,prod;
	
	for(j=1;j<=3;j++)
	 for(k=1;k<=4;k++)
	 {
	 	prod=j*k;
	 	printf("\n%2d*%2d=%2d",j,k,prod);
	 }
	 return 0;
}
