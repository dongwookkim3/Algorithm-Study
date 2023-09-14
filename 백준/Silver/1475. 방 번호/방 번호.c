#include <stdio.h>
int main(){
	int A[10]={},max=0,N;
	scanf("%d",&N);
	while(N>0){
		A[N%10]++;
		N/=10;
	}
	A[6]=(A[6]+A[9]+1)/2;
	for (int i=0;i<9;++i){
		if (A[i]>max) max=A[i];
	}
	printf("%d",max);
	return 0;
}