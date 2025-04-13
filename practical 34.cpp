// Write a C program to find the area of parallelogram //
#include<stdio.h>
int main()
{
	int base,height,area;
	printf("Enter the base of the parallelogram:");
	scanf("%d",&base);
	printf("Enter the height of the parallelogram");
	scanf("%d",&height);
	
	area=base*height;
	printf("The area of the parallelogram is %d",area);
	
	return 0;
}
