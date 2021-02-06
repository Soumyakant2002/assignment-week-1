#include <stdio.h>
int main()
{
	float  r,d,c,a;
	printf("enter the radius of the circle :");
	scanf("%f",&r);
	
	d=2*r;
	printf("the diameter of the circle =%f\n",d);
              c=2*r*3.14;
	printf("the circumference of the circle =%f\n",c);
	a=r*r*3.14;
	printf("the area of the circle =%f\n",a);
		
	return 0;
	
}

