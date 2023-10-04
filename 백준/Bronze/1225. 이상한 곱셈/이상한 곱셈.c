#include <stdio.h>
int main(){
	long long int m=0;
	char A[10001]={},B[10001]={};
	scanf("%s %s",&A[1],&B[1]);
	for (int i=1;A[i]!='\0';i++){
		for (int j=1;B[j]!='\0';j++){
			m+=(A[i]-48)*(B[j]-48);
		}
	}
	printf("%lld",m);
	return 0;
}