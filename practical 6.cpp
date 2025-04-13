// Write a Program to calculate the area of a rectangle //
#include<stdio.h>
int main()
{
	int base,width,Area;
	printf("Enter the base of the rectangle:");
	scanf("%d",&base);
	printf("Enter the width of the rectangle:");
	scanf("%d",&width);
	Area=base*width;
	printf("The area of the rectangle is %d",Area);
	
	return 0;
}
