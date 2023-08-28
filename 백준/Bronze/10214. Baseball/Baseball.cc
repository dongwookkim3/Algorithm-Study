#include <stdio.h>
int main()
{
	int a,A=9,b,c,bt=0,ct=0;
	scanf("%d",&a);
	for (;a>0;a--)
	{
		for (;A>0;A--)
		{
			scanf("%d %d",&b,&c);
			bt+=b;
			ct+=c;
		}
		if (bt>ct) printf("Yonsei\n");
		else if  (bt<ct) printf("Korea\n");
		else printf("Draw\n");
		bt=0,ct=0,A=9;
	}
	return 0;
}

