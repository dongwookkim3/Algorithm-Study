#include <stdio.h>
int main(){
	unsigned long long int A[10001]={0,1,1,2,};
	for (int i=2;i<=10000;i++){
		A[i]=A[i-1]+A[i-2];
	}
	int n;
	scanf("%d",&n);
	printf("%llu",A[n]);
	return 0;
}