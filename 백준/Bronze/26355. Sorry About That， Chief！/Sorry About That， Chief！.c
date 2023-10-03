#include <stdio.h>
int A[100001]={1,1,};
int main(){
	for (int i=2;i<=100000;i++){
		if (A[i]==0){
			for (long long int j=(long long)i*i;j<=100000;j+=i){
				A[j]=1;
			}
		}
	}
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		int a;
		scanf("%d",&a);
		printf("Input value: %d\n",a);
		if (A[a]==0) printf("Would you believe it; it is a prime!\n\n");
		else {
			for (int j=1;;j++){
				if (A[a-j]==0 || A[a+j]==0){
					printf("Missed it by that much (%d)!\n\n",j);
					break;
				}
			}
		}
	}
	return 0;
}