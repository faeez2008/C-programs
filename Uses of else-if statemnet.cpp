// Uses of else-if statemnet //
// C program to make a calculator using else-if statemnsts //
#include<stdio.h>
int main()
{
	int choice;
	float x,y;
	printf("Program to perform arthematic operations:");
	
	printf("\n1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Multiplication");
	printf("\n4.Division\n");
	
	printf("Enter your choice:");
	scanf("%d",&choice);
	
	printf("Enter two numbers:");
	scanf("%f %f",&x, &y);
	
	if(choice==1)
	printf("Sum=%.2f\n",x+y);
	else if(choice==2)
	printf("Difference=%.2f\n",x-y);
	else if(choice==3)
	printf("Product=%.2f\n",x*y);
	else if(choice==4)
	printf("Remainder=%.2f\n",x/y);
	else
	printf("Invalid choice!\n");
	
	return 0;
}
