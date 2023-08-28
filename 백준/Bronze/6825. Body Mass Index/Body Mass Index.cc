#include <stdio.h>
int main()
{
	float a,b,c;
	scanf("%f\n%f",&a,&b);
	c=a/(b*b);
	if (c>25) printf("Overweight");
	else if (c<18.5) printf("Underweight");
	else printf("Normal weight");
	
	return 0;
}