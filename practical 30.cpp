// Write a program to find the sum,product and average of five given numbers//
#include<stdio.h>
int main()
{
	int n1,n2,n3,n4,n5,Prod,Sum;
	float AVG;
	printf("Enter 5 numbers:");
	scanf("%d %d %d %d %d",&n1, &n2, &n3, &n4, &n5);
	
	Sum=n1+n2+n3+n4+n5;
	printf("Sum=%d\n",Sum);
	
	Prod=n1*n2*n3*n4*n5;
	printf("Product=%d\n",Prod);
	
	AVG=Sum/5;
	printf("Average=%.2f\n",AVG);
	
	return 0;
}
