// Write a program to Calculate the area of right angle triangle//
#include<stdio.h>
int main()
{
	int base,height;
	float Area;
	printf("Enter base of the triangle:");
	scanf("%d",&base);
	
	printf("Enter height of the traingle:");
	scanf("%d",&height);
	
	Area=0.5*base*height;
	
	printf("The Area of the triangle is %6.2f",Area);
	
	return(0);
}
