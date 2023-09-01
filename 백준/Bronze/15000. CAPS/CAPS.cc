#include <stdio.h>
int main(){
	char a[1000001];
	scanf("%s",a);
	for (int i=0;a[i]!='\0';i++){
		printf("%c",a[i]-32);
	}
    return 0;
}