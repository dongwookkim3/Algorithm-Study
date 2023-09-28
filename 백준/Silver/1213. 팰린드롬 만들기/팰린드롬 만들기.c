#include <stdio.h>
int main(){
	int A[91]={},B[91]={},q;
	char a[51]={};
	scanf("%s",&a[1]);
	for (int i=1;a[i]!='\0';i++){
		A[a[i]]++;
		B[a[i]]++;
	}
	int p=0;
	for (int i=65;i<=90;i++) if (A[i]%2==1) p++;
	if (p!=1 && p!=0){
		printf("I'm Sorry Hansoo");
		return 0;
	} 
	if (p==1){
		for (int i=65;i<=90;i++){
			if (A[i]%2==1){
				q=i;
				A[i]--;
				B[i]--;
			}
		}
	}
	for (int i=65;i<=90;i++){
		if (A[i]!=0){
			A[i]/=2;
			B[i]/=2;
		}
	}
	for (int i=65;i<=90;i++){
		while (A[i]!=0){
			printf("%c",i);
			A[i]--;
		}
	}
	if (p==1) printf("%c",q);
	for (int i=90;i>=65;i--){
		while (B[i]!=0){
			printf("%c",i);
			B[i]--;
		}
	}
	return 0;
}