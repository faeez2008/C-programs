// Write a C program to find the acceleration of a moving body .//
#include<stdio.h>
int main()
{
	int a,f,m;
	printf("Enter the mass of the moving body:");
	scanf("%d",&m);
	printf("Enter the force acting on the moving body:");
	scanf("%d",&f);
	a=f/m;
	printf("The acceleration of the moving body is %d",a);
	
	return 0;
}
