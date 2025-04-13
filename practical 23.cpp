// Write a program to find the graed of a student on percentage marks //
#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter your numbers:");
	scanf("%d",&num);
	
	if(num>=80)
	printf("\nYou got A Grade");
	else if(num>=60)
	printf("\nYou got B Grade");
	else if(num>=40)
	printf("\nYou got C Grade");
	else 
	printf("You failed the examination");
	
	return 0;
}
