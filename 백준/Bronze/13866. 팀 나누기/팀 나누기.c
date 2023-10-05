#include <stdio.h>
int min(int a,int b){
	if (a>=b) return b;
	else return a;
}
int main(){
	int A[5]={};
	for (int i=1;i<=4;i++){
		scanf("%d",&A[i]);
	}
	while(1){
		int b=0;
		for (int i=1;i<=4;i++){
			if (A[i-1]>A[i]){
				int t=A[i-1];
				A[i-1]=A[i];
				A[i]=t;
				b++;
			}
		}
		if (b==0) break;
	}
	int a=A[1]+A[4],b=A[2]+A[3];
	printf("%d",a+b-min(a,b)*2);
	return 0;
}