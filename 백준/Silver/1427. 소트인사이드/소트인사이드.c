#include <stdio.h>
int main(){
	int A[10]={};
	char B[1001]={};
	scanf("%s",&B[1]);
	for (int i=1;B[i]!='\0';i++){
		A[B[i]-48]++;
	}
	for (int i=9;i>=0;i--){
		while (A[i]!='\0'){
			A[i]--;
			printf("%d",i);
		}
	}
	return 0;
}