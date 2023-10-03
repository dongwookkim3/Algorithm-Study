#include <stdio.h>
int A[10001]={};
int main(){
	for (int i=2;i<=10000;i++){
		if (A[i]==0){
			for (int j=i*i;j<=10000;j+=i){
				A[j]=1;
			}
		}
	}
	int n=0;
	char B[101]={};
	scanf("%s",B);
	for (int i=0;B[i]!='\0';i++){
		if (B[i]>96){
			n+=B[i]-96;
		}
		else {
			n+=B[i]-38;
		}
	}
	if (A[n]==0) printf("It is a prime word.");
	if (A[n]==1) printf("It is not a prime word.");
	return 0;
}