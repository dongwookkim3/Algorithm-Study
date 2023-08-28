#include <stdio.h>
int main()
{
	float a;
	int b,c=0,i;
	scanf("%f",&a);
	for (i=0;a>i;i++)
	{
		scanf("%d",&b);
		if (b==1) c+=1;
	}
	if (a/2>c) printf("Junhee is not cute!");
	else printf("Junhee is cute!");
	return 0;
}