#include <stdio.h>
int main(){
	int n,A[101]={},m=0,max=0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&A[i]);
	}
	for (int i=1;i<=n;i++){
		if (A[i]==0) m=0;
		else m++;
		max+=m;
	}
	printf("%d",max);
	return 0;
}