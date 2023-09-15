#include <stdio.h>
int main(){
	int A[100001]={},n,a,max=0,N=1;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&a);
		A[N]=a;
		N++;
		if (a==0){
			for (int j=N;j>=1;j--){
				if (A[j]!=0){
					A[j]=0;
					N--;
					break;
				}
		}
		}
		
	}
	for (int i=1;i<=N;i++){
		if (A[i]!=0) max+=A[i];
	}
	printf("%d",max);
	return 0;
}