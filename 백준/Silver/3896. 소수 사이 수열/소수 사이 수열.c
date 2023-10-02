#include <stdio.h>
int main(){
	int A[1300001]={};
	for (int i=2;i<=1300000;i++){
		if (A[i]==0){
			for (long long int j=(long long)i*i;j<=1300000;j+=i){
				A[j]=1;
			}
		}
	}
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		int a;
		scanf("%d",&a);
		if (A[a]==0){
			printf("0\n");
			continue;
		}
		for (int j=1;;j++){
			if (A[a-j]==0){
				a=a-j+1;
				break;
			}
		}
		for (int j=1;;j++){
			if (A[a+j]==0){
				printf("%d\n",++j);
				break;
			}
		}
	}
	return 0;
}