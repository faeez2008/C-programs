// Write a program to Calcultae sum of five subjects and find percentage//
#include<stdio.h>
int main()
{
	float s1,s2,s3,s4,s5,sum,totalmarks=500;
	float percentage;
	
	printf("Enter the marks of five subjects:");
	scanf("%f %f %f %f %f",&s1, &s2, &s3, &s4, &s5);
	
	sum=s1+s2+s3+s4+s5;
	printf("The sum of the five subjects is:%.2f\n",sum);
	
	percentage=(sum*100)/totalmarks;
	printf("The percentage of the five subjects is:%.2f\n",percentage);
	
	return 0;
}
