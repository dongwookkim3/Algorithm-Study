#include <stdio.h>
int main(){
	int st,wt,T;
	scanf("%d\n%d",&st,&wt);
	T=wt-st;
	if (T<0) T+=24;
	printf("%d",T);
	return 0;
}