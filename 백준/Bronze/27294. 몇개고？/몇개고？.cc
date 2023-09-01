#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	if (a>=12&&a<=16)
	{
		if (b<1) printf("320");
		else printf("280");
	}
	else printf("280");
	return 0;
}