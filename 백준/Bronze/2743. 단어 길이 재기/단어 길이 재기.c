#include <stdio.h>
int main(){
	char a[101];
	int i,c=0;
	scanf("%s",a);
	for (i=0;a[i]!='\0';i++) c++;
	printf("%d",c);
	return 0;
}