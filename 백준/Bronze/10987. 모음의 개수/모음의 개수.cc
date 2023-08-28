#include <stdio.h>
int main()
{
	int i,A=0;
	char a[101];
	scanf("%s",a);
	for (i=0;a[i]!=NULL;i++)
	{
		if (a[i]=='a') A+=1;
		if (a[i]=='e') A+=1;
		if (a[i]=='i') A+=1;
		if (a[i]=='o') A+=1;
		if (a[i]=='u') A+=1;
	}
	printf("%d",A);
	
	
	
	
	
	return 0; 
}