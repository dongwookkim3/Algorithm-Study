#include <stdio.h>
int main(){
	int h,m;
	scanf("%d %d",&h,&m);
	h-=9;
	if (h<0) h=0;
	m+=h*60;
	printf("%d",m);
	return 0;
}