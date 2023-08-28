#include <stdio.h>
int main()
{
	int a=3,b=2001,c=2,d=2001,A,C;
	for (;a>0;a--)
	{
		scanf("%d",&A);
		if(A<b) b=A;
	}
	for (;c>0;c--)
	{
		scanf("%d",&C);
		if(C<d) d=C;
	}
	printf("%d",b+d-50);
	return 0;
}