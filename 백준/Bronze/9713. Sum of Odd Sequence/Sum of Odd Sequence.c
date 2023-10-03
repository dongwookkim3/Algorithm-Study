#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		int a,m=0;
		scanf("%d",&a);
		for (int j=1;j<=a;j+=2){
			m+=j;
		}
		printf("%d\n",m);
	}
	return 0;
}