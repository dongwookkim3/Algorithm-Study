#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		int A[25]={},m=0;
		for (int j=24;j>=1;j--){
			scanf("%1d",&A[j]);
		}
		for (int j=1;j<=24;j++){
			if (A[j]==1){
				m+=pow(2,j-1);
			}
		}
		printf("%d\n",m);
	}
	return 0;
}