#include <stdio.h>
int main(){
	int n;
	char A[10000]={};
	scanf("%d",&n);
	while(n--){
		scanf("%s",&A[1]);
		for (int i=1;A[i]!='\0';i++){
			if (A[i]!=A[i-1]) printf("%c",A[i]);
		}
		printf("\n");
	}
	return 0;
}