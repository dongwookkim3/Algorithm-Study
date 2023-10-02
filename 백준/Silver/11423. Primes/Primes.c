#include <stdio.h>
int main(){
	int A[10000001]={1,1,};
	for (int i=2;i<=10000000;i++){
		if (A[i]==0){
			for (unsigned long long int j=(unsigned long long)i*i;j<=10000000;j+=i){
				A[j]=1;
			}
		}
	}
	int s,e;
	while(scanf("%d %d",&s,&e)!=EOF){
		int m=0;
		for (int i=s;i<=e;i++){
			if (A[i]==0) m++;
		}
		printf("%d\n\n",m);
	}
}