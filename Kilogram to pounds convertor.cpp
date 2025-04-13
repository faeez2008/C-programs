// Write a program whcich converts kilograms to pounds using while loop.In this program zero signals the end of the programe //
#include<stdio.h>
int main()
{
	float kgs,lbs;
	printf("\nEnter weight in kgs(zero to quite):");
	scanf("%f",&kgs);
	
	while(kgs!=0)
	{
		lbs=2.2*kgs;
		printf("%.2f kgs =%.2f lbs",kgs,lbs);
		
		printf("\nEnter a weight in kgs (zero to quit):");
		scanf("%f",&kgs);
	}
	printf("Program ended\n");
	
	return 0;
}
