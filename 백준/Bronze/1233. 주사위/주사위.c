#include <stdio.h>
int main(){
	int a,b,c,A[16001]={},max=0;
	scanf("%d %d %d",&a,&b,&c);
	for (int i=1;i<=a;i++){
		for (int j=1;j<=b;j++){
			for (int k=1;k<=c;k++){
				A[i+j+k]++;
				if (A[i+j+k]>max) max=A[i+j+k];
			}
		}
	}
	for (int i=0;;i++){
		if (A[i]==max){
			printf("%d",i);
			return 0;
		}
	}
}