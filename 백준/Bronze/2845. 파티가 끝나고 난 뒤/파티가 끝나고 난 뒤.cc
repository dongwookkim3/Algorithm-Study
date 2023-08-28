#include <stdio.h>
int main()
{
	int a,b,z1,z2,z3,z4,z5,X;
	scanf("%d %d\n",&a,&b);
	scanf("%d %d %d %d %d",&z1,&z2,&z3,&z4,&z5);
	X=a*b;
	printf("%d %d %d %d %d",z1-X,z2-X,z3-X,z4-X,z5-X);
	
	return 0;
}