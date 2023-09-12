#include <stdio.h>
int main(){
	int n,A[100]={},B[100]={},t,s=0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&A[i]);
	}
	for (int i=1;i<=n;i++){
		scanf("%d",&B[i]);
	}
	while(1){
		int b=0;
		for (int i=1;i<=n;i++){
			if (A[i-1]>A[i]){
				b++;
				t=A[i];
				A[i]=A[i-1];
				A[i-1]=t;
			}
		}
		for (int i=1;i<=n;i++){
			if (B[i+1]>B[i]){
				b++;
				t=B[i];
				B[i]=B[i+1];
				B[i+1]=t;
			}
		}
		if (b==0) break;
	}
	for (int i=1;i<=n;i++){
		s+=A[i]*B[i];
	}
	printf("%d",s);
	return 0;
}