#include <stdio.h>
int main(){
	int n=0;
	char String[100]={};
	while (gets(String)!='\0') n++;
	printf("%d",n);
	return 0;
}