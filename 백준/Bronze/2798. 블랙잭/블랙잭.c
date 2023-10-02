#include <stdio.h>
int main(){
	int n,m,A[101]={},max=0;
	scanf("%d %d",&n,&m);
	for (int i=1;i<=n;i++){
		scanf("%d",&A[i]);
	}
	for (int i=1;i<=n;i++){
		for (int j=i;j<=n;j++){
			if (j==i) continue;
			for (int k=j;k<=n;k++){
				if (k==i || k==j) continue;
				else if (A[i]+A[j]+A[k]>max && A[i]+A[j]+A[k]<=m) max=A[i]+A[j]+A[k];
			}
		}
	}
	printf("%d",max);
	return 0;
}