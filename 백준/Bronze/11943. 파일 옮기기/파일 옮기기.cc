#include <stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d %d\n%d %d",&a,&b,&c,&d);
	if(a+d>b+c) printf("%d",b+c);
	else printf("%d",a+d);
}