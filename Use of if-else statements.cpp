// Use of if-else statements//
// Program to print pass or fail according to a student marks //
#include<stdio.h>
int main()
{
	int M;
	printf("Enter your marks:");
	scanf("%d",&M);
	
	if(M>=32)
	printf("You have passed the exam\n");
	else
	printf("Better luck next time!");
	
	return 0;
}
