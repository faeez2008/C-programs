// Chapter 4 Lab activity 3 //
// Write the above program using conditional operator //
#include<stdio.h>
int main()
{
	int a,b,largest;
	printf("Enter two numbers:");
	scanf("%d %d",&a, &b);
	
	largest=(a>b)? printf("Largest=A\n"):printf("Largest=B\n");
	
	return 0;
}
