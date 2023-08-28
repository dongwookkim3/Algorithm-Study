#include <stdio.h>
int main()
{
	long long int a,b;
	scanf("%d",&a);
	for (;a>0;a--)
	{
		scanf("%d",&b);
		if (b%2==0) printf("%d is even\n",b);
		if (b%2==1) printf("%d is odd\n",b);
		
	}
	return 0;
}