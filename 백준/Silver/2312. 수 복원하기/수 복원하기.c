#include <stdio.h>
int main(){
	int A[100001]={1,1,};
	for (int i=2;i<=100000;i++){
		if (!A[i]){
			for (long long int j=(long long)i*i;j<=100000;j+=i){
				A[j]=1;
			}
		}
	}
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		int a,B[100001]={};
		scanf("%d",&a);
		for (int j=2;a!=1;j++){
			while (a%j==0){
				B[j]++;
				a/=j;
			}
			if (B[j]!=0){
				printf("%d %d\n",j,B[j]);
			}
		}
	}
	return 0;
}