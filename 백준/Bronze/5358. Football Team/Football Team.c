#include <stdio.h>
int main(){
	char A[10000]={};
	while(1){
		if (gets(A)==NULL) break;
		for (int i=0;A[i]!='\0';i++){
			if (A[i]=='i') A[i]='e';
			else if (A[i]=='e') A[i]='i';
			else if (A[i]=='E') A[i]='I';
			else if (A[i]=='I') A[i]='E';
		}
		puts(A);
	}
	return 0;
}