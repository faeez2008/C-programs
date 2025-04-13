// Write a program to find the area of a Rhombus //
#include<stdio.h>
int main()
{
	int p,q,A;
	printf("Enter the value of first diagonal:");
	scanf("%d",&p);
	printf("Enter the value of second Diagonal:");
	scanf("%d",&q);
	
	A=(p*q)/2;
	printf("The area of the Rhombus is %d",A);
	
	return 0;
}
