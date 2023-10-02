#include <stdio.h>
int main(){
	int A[105001]={1,1,};
	for (int i=2;i<=105000;i++){
		if (A[i]==0){
			for (long long int j=(long long)i*i;j<=105000;j+=i){
				A[j]=1;
			}
		}
	}
	int n,t=0;
	scanf("%d",&n);
	for (int i=1;;i++){
		if (A[i]==0) t++;
		if (t==n){
			printf("%d",i);
			return 0;
		}
	}
}