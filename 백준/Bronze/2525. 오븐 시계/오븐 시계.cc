#include <stdio.h>
int main()
{
	int h,m,s;
	scanf("%d %d %d",&h,&m,&s);
	m = m+s;
	while (m>=60)
	{
		h = h+1;
		m = m-60;
	}
	if (h>=24)
	{
		h=h-24;
	}
	printf("%d %d",h,m);
	
	
	return 0;
}
