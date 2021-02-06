#include <stdio.h>
int main()
{
	float p,c,b,m,comp,per;
	printf("enter marks obtained in physics :");
	scanf("%f",&p);
	printf("enter marks obtained in chemistry :");
	scanf("%f",&c);
	printf("enter marks obtained in biology :");
	scanf("%f",&b);
	printf("enter marks obtained in maths :");
	scanf("%f",&m);
	printf("enter marks obtained in computer :");
	scanf("%f",&comp);
	
	per=(p+c+b+m+comp)/5;
	printf("percentage obtained=%f\n",per);
	
    if (per>=90)
    printf("grade obtained is A");
    else if (per>=80)
    printf("grade obtained is B");
    else if (per>=70)
	printf("grade obtained is C");
    else if (per>=60)
    printf("grade obtained is D");
    else if (per>=40)
    printf("grade obtained is E");
    else if (per<40)
    printf("grade obtaines is F");
    
	return 0;
	
}

