// Write a program which reads Letter grades and give remarks accordingly //
#include<stdio.h>
int main()
{
	char Grades;
	printf("Enter your Grade:");
	scanf("%c",&Grades);	
	switch(Grades)
{
	case 'A':
	printf("Excellent\n"); break;
	case 'B':
	printf("Well done\n"); break;
	case 'C':
	case 'D':
	printf("Satisfactory\n"); break;
	case 'F':
	printf("Poor performance\n"); break;
}		
	return 0;
}
