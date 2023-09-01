#include <stdio.h>
int main()
{
	int a,i;
	char b[100000];
	scanf("%d",&a);
	for (i=0;;i++)
	{
		if(a>=5)
		{
			b[i]='V';
			a-=5;
		}
		else if(a>=1)
		{
				b[i]='I';	
				a-=1;
		}
		else break;
	}
	printf("%s",b);
	return 0;
}