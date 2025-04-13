// Write a program to find the volume of cube,cylinder and sphere.//
#include<stdio.h>
int main()
{
	int h,r1,r2,v1,v2,v3,l,pi=3.14;
	
	printf("Enter the height of the cylinder:");
	scanf("%d",&h);
	printf("Enter the Radius of the cylinder:");
	scanf("%d",&r1);
	printf("Enter Radius of a sphere:");
	scanf("%d",&r2);
	printf("Enter the lenght of one side of cube:");
	scanf("%d",&l);
// Volume of cube //
v1=l*l*l;
printf("The voulme of the cube is %d\n",v1);
// Volume of cylinder //
v2= pi*r1*r1*h;
printf("The Volume of the cylinder is %d\n",v2);
//Volue of sphere//
v3=(4*pi*r2*r2*r2)/3;
printf("The volume of the sphere is %d\n",v3);

return 0;
}
