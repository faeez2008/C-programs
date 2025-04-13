// Program to print fisrt 50 even numbers by using while loop in c language.
#include<stdio.h>
int main()
{
	int count,num;
	num=2;
	count=1;
	while(count<=50)
	{
		printf("%d  ",num);
		num=num+2;
		count++;
	}
	
	return 0;
}
