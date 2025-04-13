// Lab activity 6 //
// Write a program that reads marks(m) of a subject and prints the letter grade as given below.//
#include<stdio.h>
int main()
{
	int m;
	printf("Enter your marks:");
	scanf("%d",&m);
	
	if(m>=80)
	printf("Grade A+");
	else if((m>=70)&&(m<80))
	printf("Grade A");
	else if((m>=60)&&(m<70))
	printf("Grade B");
	else if((m>=50)&&(m<60))
	printf("Grade C");
	else if((m>=40)&&(m<50))
	printf("Grade D");
	else if((m>=33)&&(m<40))
	printf("Grade E");
	else
	printf("Ungraded");
	
	return 0;
}
