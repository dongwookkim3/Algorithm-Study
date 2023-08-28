#include <stdio.h>
int main()
{
	float a,b=0,c=35;
	scanf("%f",&a);
	for (;c>0;c--)
	{
		if (a==1) b=1;
		a=a/2;
	}
	if (b==1) printf("1");
	else printf("0");
	
	
	
	
	
	
	return 0; 
}