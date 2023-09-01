#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	float A=(a+1)*(b+1)/(c+1)-1;
	printf("%d",(int)A);
	return 0;
}