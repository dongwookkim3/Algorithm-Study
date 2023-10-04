#include <stdio.h>
int main(){
	int a,b,m=0,min=10001;
	scanf("%d %d",&a,&b);
	for (int i=1;;i++){
		if (i*i>b) break;
		else if (i*i>=a && i*i<=b){
			m+=i*i;
			if (i*i<min) min=i*i;
		}
	}
	if (min==10001){
		printf("-1");
	}
	else printf("%d\n%d",m,min);
	return 0;
}