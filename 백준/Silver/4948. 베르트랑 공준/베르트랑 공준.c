#include <stdio.h>
int main(){
	int A[246913]={};
	for (int i=2;i<=246912;i++){
		if (A[i]==0){
			for (long long int j=(long long)i*i;j<=246912;j+=i){
				A[j]=1;
			}
		}
	}
	int n,max=0;
	while (1){
		max=0;
		scanf("%d",&n);
		if (n==0) break;
		for (int i=n+1;i<=n+n;i++){
			if (A[i]==0) max++;
		}
		printf("%d\n",max);
	}
	return 0;
}