// Write a program to compare three integers //
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three integers value:");
	scanf("%d %d %d",&a, &b, &c);
	
	if(a>b&&a>c)
	printf("%d is greatest number",a);
	else if(b>a&&b>c)
	printf("%d is the greatest number",b);
	else
	printf("%d is the greatest number",c);
	
	return 0;
}
