// Chapter 4 Lab activity 5 //
// Write a program that reads temperature(t) in celsius and prints a message as given below.//
#include<stdio.h>
int main()
{
	int t;
	printf("Enter temperature:");
	scanf("%d",&t);
	
	if(t>32)
	printf("Today is hot!");
	else if((t>=20)&&(t<=35))
	printf("Nice day!");
	else if(t<20)
	printf("It is a cold day!");
	
	return 0;
	
}
