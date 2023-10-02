#include <stdio.h>
int A[1001];
int f(int n,int k){
	int m=0;
	for (int i=2;i<=n;i++){
		if (A[i]==0){
			for (int j=i;j<=n;j+=i){
				if (i==j){
					m++;
					if (k==m) return j;
					continue;
				}
				if (A[j]==0){
					A[j]=1;
					m++;
					if (k==m) return j;
				}
			}
		}
	}
}
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	printf("%d",f(n,k));
	return 0;
}