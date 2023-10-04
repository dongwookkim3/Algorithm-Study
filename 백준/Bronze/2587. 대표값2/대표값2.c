#include <stdio.h>
int main(){
	int A[101]={},max=0;
	for (int i=1;i<=5;i++){
		int a;
		scanf("%d",&a);
		A[a]++;
		max+=a;
	}
	printf("%d\n",max/5);
	int m=0;
	for (int i=1;i<=100;i++){
		while (A[i]!=0){
			m++;
			A[i]--;
			if (m==3){
				printf("%d",i);
				break;
			}
		}
	}
	return 0;
}