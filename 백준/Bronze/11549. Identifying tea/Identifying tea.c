#include <stdio.h>
int main(){
	int n,m=0;
	scanf("%d",&n);
	for (int i=1;i<=5;i++){
		int a;
		scanf("%d",&a);
		if (a==n) m++;
	}
	printf("%d",m);
	return 0;
}