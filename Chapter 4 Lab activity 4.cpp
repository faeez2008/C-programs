// Chapter 4 Lab activity 4 //
/* Write a program that reads a number(n) and  prints a message based on its vlaue as given:
   vlaue of n                     message to print 
   n is greater than zero         it is a positive number
   n is less than zero            it is a negative number
   n is eqyal to zeo              It is equal to zero
 */
 #include<stdio.h>
 int main()
 {
 	int n;
 	printf("Enter a number:");
 	scanf("%d",&n);
 	
 	if(n>0)
 	printf("%d is a positive number\n",n);
 	else if(n<0)
 	printf("%d is a negative number \n",n);
 	else
 	printf("%d is equal to zero \n",n);
 	
 	return 0;
 }
