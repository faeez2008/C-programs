// Write a program t swap two numbers using temporary variable (temp)//
#include<stdio.h>
int main()
{
	int x,y,temp;
	printf("Enter the value of x:");
	scanf("%d",&x);
	printf("Enter the value of y:");
	scanf("%d",&y);
	
	printf("Before swapping\nx=%d\ny=%d\n",x,y);
	temp=x;
	x=y;
	y=temp;
	
	printf("After swapping\nx=%d\ny=%d\n",x,y);
	
	return(0);
	
}
