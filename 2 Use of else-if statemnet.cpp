// Else if statment to print letter grades for students results //
#include<stdio.h>
int main()
{
	int M;
	printf("Enter your marks:");
	scanf("%d",&M);
	
	if((M>=80)&&(M<100))
	printf("Grade A\n");
	else if((M>=70)&&(M<79))
	printf("Grade B\n");
    else if((M>=60)&&(M<69))
    printf("Grade C\n");
	else if((M>=50)&&(M<59))
	printf("Grade D\n");
	else
	printf("Grade F\n");
	
	return 0;
}
