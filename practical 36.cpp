// Write a program to find the area of a trapezium //
#include<stdio.h>
int main()
{
	int a,b,h,A;
	printf("Enter the height of the trapezium:");
	scanf("%d",&h);
	printf("Enter the two bases of the trapezium:");
	scanf("%d %d",&a, &b);
	
	A=((a+b)/2)*h;
	printf("The area of the trapezium is %d",A);
	
	return 0;
}
