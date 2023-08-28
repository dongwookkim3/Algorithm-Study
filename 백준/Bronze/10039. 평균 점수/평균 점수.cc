#include <stdio.h>
int main()
{
	int V=5,a,X=0;
	for (;V>0;V--)
	{
		scanf("%d",&a);
		if (a<40) a=40;
		X+=a;
	}
	printf("%d",X/5);
	return 0;
}