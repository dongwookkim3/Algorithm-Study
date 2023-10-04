#include <stdio.h>
int main(){
	int n,A[51]={};
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&A[i]);
	}
	while(1){
		int b=0;
		for (int i=1;i<=n;i++){
			if (A[i-1]>A[i]){
				int t=A[i-1];
				A[i-1]=A[i];
				A[i]=t;
				b++;
			}
		}
		if (b==0) break;
	}
	printf("%d",A[1]*A[n]);
	return 0;
}