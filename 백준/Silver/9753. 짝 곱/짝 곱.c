#include <stdio.h>
int main(){
	int A[1000001]={},B[1000001]={};
	for (int i=2;i<=1000000;i++){
		if (!A[i]){
			for (long long int j=(long long)i*i;j<=1000000;j+=i){
				A[j]=1;
			}
		}
	}
	for (int i=2;i<=1000000;i++){
		if (A[i]) continue;
		for (int j=i;(long long)i*j<=1000000;j++){
			if (i==j || (A[j])) continue;
			B[i*j]=1;
		}
	}
	int t;
	scanf("%d",&t);
	for (int i=1;i<=t;i++){
		int k;
		scanf("%d",&k);
		for (int j=k;;j++){
			if (B[j]==1){
				printf("%d\n",j);
				break;
			}
		}
	}
	return 0;
}