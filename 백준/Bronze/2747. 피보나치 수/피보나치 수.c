#include <stdio.h>
int main(){
	long long int A[101]={0,1,1,2,};
	for (int i=3;i<=101;i++){
		A[i]=A[i-1]+A[i-2];
	}
	long long int n;
	scanf("%lld",&n);
	printf("%lld",A[n]);
	return 0;
}