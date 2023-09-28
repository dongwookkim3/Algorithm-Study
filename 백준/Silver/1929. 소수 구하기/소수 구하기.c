#include <stdio.h>
#include <stdbool.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	bool *A = (bool *)malloc((b + 1) * sizeof(bool));
	for (int i=2;i*i<=b;i++){
		if (!A[i]){
			for (int j=i*i;j<=b;j+=i){
				A[j]=1;
			}
		}
	}
	for (int i=a;i<=b;i++){
		if (A[i]==0 && i!=1){
			printf("%d\n",i);
		}
	}
	free(A);
	return 0;
}