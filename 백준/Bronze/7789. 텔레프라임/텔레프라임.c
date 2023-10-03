#include <stdio.h>
int A[10000001]={1,1,};
int main(){
	for (int i=2;i<=10000000;i++){
		if (A[i]==0){
			for (long long int j=(long long)i*i;j<=10000000;j+=i){
				A[j]=1;
			}
		}
	}
	int n,m;
	scanf("%d %d",&n,&m);
	if (A[n]==0 && A[n+m*1000000]==0) printf("Yes");
	else printf("No");
	return 0;
}