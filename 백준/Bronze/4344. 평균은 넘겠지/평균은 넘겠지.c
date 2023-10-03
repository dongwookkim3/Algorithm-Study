#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for (int i=1;i<=t;i++){
		int n,A[1001]={};
		float m=0,T=0;
		scanf("%d",&n);
		for (int j=1;j<=n;j++){
			scanf("%d",&A[j]);
			m+=A[j];
		}
		for (int j=1;j<=n;j++){
			if (m/n<A[j]) T++;
		}
		printf("%.3f%%\n",T/n*100);
	}
	return 0;
}