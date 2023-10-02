#include <stdio.h>
int A[11]={1,};
int main(){
	int m=1;
	for (int i=1;i<=10;i++){
		A[i]=m*i;
		m*=i;
	}
	int n,k;
	scanf("%d %d",&n,&k);
	printf("%d",A[n]/(A[k]*A[n-k]));
	return 0;
}