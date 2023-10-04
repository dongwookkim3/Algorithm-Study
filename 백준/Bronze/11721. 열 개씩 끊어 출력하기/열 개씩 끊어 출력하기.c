#include <stdio.h>
int main(){
	char A[101]={};
	gets(A);
	for (int i=0;A[i]!='\0';i++){
		printf("%c",A[i]);
		if (i%10==9) printf("\n");
	}
	return 0;
}