#include <stdio.h>
#include <math.h>
int main(){
	int i=1,v,a,b;
	scanf("%d %d %d",&a,&b,&v);
	v-=a;
	if (v%(a-b)==0) i+=v/(a-b);
	else i+=v/(a-b)+1;
	printf("%d",i);
	return 0;
}