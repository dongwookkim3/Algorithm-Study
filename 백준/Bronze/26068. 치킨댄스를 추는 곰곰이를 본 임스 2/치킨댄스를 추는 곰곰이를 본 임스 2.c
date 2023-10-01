#include <stdio.h>
int main(){
	int n,m=0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		int d;
		char a,b,c;
		scanf("%c%c%c%d",&a,&b,&c,&d);
		if (d<=90) m++;
	}
	printf("%d",m);
	return 0;
}