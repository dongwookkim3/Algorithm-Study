#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (b==c) printf("Anything");
	else if (b>c) printf("Subway");
	else printf("Bus");
	return 0;
}