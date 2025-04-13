// Shorthand of if-else statement (Conditional operator) //
#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your marks:");
	scanf("%d",&marks);
	
	(marks>=32)? printf("Pass\n"):printf("Fail\n");
	
	return 0;
}
