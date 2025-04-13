// Write a program to find the area of a triangle //
#include<stdio.h>
int main()
{
	int base,height,area;
	printf("Enter the Base of the triangle:");
	scanf("%d",&base);
	printf("Enter the height of the program:");
	scanf("%d",&height);
	area=(base*height)/2; //(assignment operator)//
	printf("The area of the triangle is %d",area);
	
	return 0;
}
