#include <stdio.h>
int main(){
	int w1,w2,h1,h2;
	scanf("%d %d %d %d",&w1,&h1,&w2,&h2);
	if (w1>=w2+2 && h1>=h2+2) printf("1");
	else printf("0");
}