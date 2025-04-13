// Write a program to find grade of a student using switch stataement //
#include<stdio.h>
int main()
{
	int num;
	printf("Enter your numbers:");
	scanf("%d",&num);
	
	printf("You entered %d marks\n",num);
	
	switch(num/10)
	{
		case 8:
		case 10:
			printf("Grade'A'"); break;
		case 7:
		case 6:
			printf("Grade'B'"); break;
		case 5:
		case 4:
			printf("Grade'C'"); break;
		default:
			printf("Ungraded");
	}
	
	return 0;
}
