#include <stdio.h>
int main(){
	int n,A[10001]={},q;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&q);
		A[q]++;
	}
	for (int i=1;i<=10000;i++){
		while (A[i]!='\0'){
			A[i]--;
			printf("%d\n",i);
		}
	}
	return 0;
}