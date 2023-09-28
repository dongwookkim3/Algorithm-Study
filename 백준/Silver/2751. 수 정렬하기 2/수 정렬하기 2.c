#include <stdio.h>
int main(){
	int n,A[1000001]={},B[1000001]={},q;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&q);
		if (q>=0){
			A[q]++;
		}
		else {
			B[-1*q]++;
		}
	}
	for (int i=1000000;i>=1;i--){
		if (B[i]!=0) printf("%d\n",-1*i);
	}
	for (int i=0;i<=1000000;i++){
		if (A[i]!=0) printf("%d\n",i);
	}
	return 0;
}