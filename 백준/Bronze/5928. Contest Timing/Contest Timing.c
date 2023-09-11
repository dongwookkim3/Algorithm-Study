#include <stdio.h>
int main(){
	int d,h,m;
	scanf("%d %d %d",&d,&h,&m);
	d-=11;
	h-=11;
	m-=11;
	h+=d*24;
	m+=h*60;
	if (m<0) printf("-1");
	else printf("%d",m);
	return 0;
}