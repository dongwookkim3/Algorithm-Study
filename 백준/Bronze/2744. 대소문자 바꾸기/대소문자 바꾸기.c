#include <stdio.h>
int main(){
	char a[101];
	scanf("%s",&a);
	for (int i=0;a[i]!='\0';i++){
		if (a[i]<91) printf("%c",a[i]+32);
		else printf("%c",a[i]-32);
	}	
	return 0;
}