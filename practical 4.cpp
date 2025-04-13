// Write a program to calculate the area and circumference of a circle //
#include<stdio.h>
int main()
{
	float A,R,Circum,pi=3.14;
	
	printf("Enter the Radius of the Circle:");
	scanf("%f",&R);
	
	A=pi*R*R;
	printf("The area of the Circle is %6.2f\n",A);
	
	Circum=2*pi*R;
	printf("The Circumference of the Circle is %6.2f\n",Circum);
	
	return(0);
}
