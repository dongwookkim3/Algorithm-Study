#include <stdio.h>
int main(){
	int N,B[27]={},c=0;
	char A[30];
	scanf("%d",&N);
	while(N--){
		scanf("%s",&A);
		B[A[0]-96]++;
	}
	for (int i=1;i<=26;i++){
		if (B[i]>=5){
			printf("%c",i+96);
			c++;
		}
	}
	if (c==0) printf("PREDAJA");
	return 0;
}