#include <stdio.h>
int main(){
	int Q;
	char A[100];
	scanf("%d",&Q);
	while(Q--){
		scanf("%s",A);
		int b=0;
		for (int i=0;A[i]!='\0';i++){
			if (A[i]=='('){
				b++;
			}
			else{
				b--;
			}
			if (b<0){
				printf("NO\n");
				break;
			}
		}
		if (b==0) printf("YES\n");
		else if (b>0) printf("NO\n");
	}
	return 0;
}