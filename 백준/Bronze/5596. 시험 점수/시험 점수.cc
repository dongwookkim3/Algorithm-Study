#include <stdio.h>
int main()
{
	int S,S1,S2,S3,S4,T,T1,T2,T3,T4;
	scanf("%d %d %d %d\n",&S1,&S2,&S3,&S4);
	S=S1+S2+S3+S4;
	scanf("%d %d %d %d",&T1,&T2,&T3,&T4);
	T=T1+T2+T3+T4;
	if (S>=T) printf("%d",S);
	else printf("%d",T);
	return 0;
}