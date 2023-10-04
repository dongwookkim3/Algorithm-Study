#include <stdio.h>
int main(){
	int n,A[10001]={},max=0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&A[i]);
		if (A[i]>max) max=A[i];
	}
	if (A[1]==max) printf("S");
	else printf("N");
}