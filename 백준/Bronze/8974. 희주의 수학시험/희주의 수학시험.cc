#include <stdio.h>
int main(){
	int A[10001]={0,1,},f,a,b,max=0;
	for (int i=1;i<=1000;i++){
		if (A[i]<A[i-1]){
			f=A[i-1]+1;
			for (int j=0;j<f;j++){
				A[i+j]=A[i-1]+1;
			}
		}
	}
	scanf("%d %d",&a,&b);
	for (int i=a;i<=b;i++){
		max+=A[i];
	}
	printf("%d",max);
	return 0;
}