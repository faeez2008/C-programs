// Write a program that diplays produts of all the ood numbers from 1 to 10 using for loop //
#include<stdio.h>
int main()
{
	int x,product;
	
	product=1;
	
	for(x=1;x<=10;x=x+2)
	product=product*x;
	
	printf("The product is %d",product);
	
	return 0;
}
