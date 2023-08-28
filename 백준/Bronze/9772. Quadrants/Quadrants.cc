#include <stdio.h>
int main()
{
	int V=5;
	float a,b;
	for (;V>0;V++)
	{
		scanf("%f %f",&a,&b);
		if (a==0||b==0) printf("AXIS\n");
		if (a>0&&b>0) printf("Q1\n");
		if (a>0&&b<0) printf("Q4\n");
		if (a<0&&b>0) printf("Q2\n");
		if (a<0&&b<0) printf("Q3\n");
		if (a==0&&b==0) break;
	}
	return 0;
}