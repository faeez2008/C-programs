// Write a program to convert Temperature from degree centigrade to fahrenhite//
#include<stdio.h>
int main()
{
	int cel;
	float fah;
	printf("Enter temperature in centigrade:");
	scanf("%d",&cel);
	
	fah=(1.8*cel)+32;
	printf("The temperature in fahrenhite is %.2f",fah);
	
	return(0);
}
