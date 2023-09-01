#include <stdio.h>
int main()
{
	int a,i,a2=0,ae=0;
	
	scanf("%d\n",&a);
	char b[a+1];
	scanf("%s",b);
	for (i=0;b[i]!=NULL;i++)
	{
		if (b[i]=='2') a2+=1;
		if (b[i]=='e') ae+=1;
	}
	if (a2>ae) printf("2");
	if (a2<ae) printf("e");
	if (a2==ae) printf("yee");
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	return 0;
}