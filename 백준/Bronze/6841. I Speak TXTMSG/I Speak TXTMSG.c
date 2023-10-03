#include <stdio.h>
#include <string.h>
int main(){
	while(1){
		char A[10]={};
		scanf("%s",A);
		if (!strcmp(A,"TTYL")){
			printf("talk to you later");
			return 0;
		}
		else if (!strcmp(A,"CU")) printf("see you\n");
		else if (!strcmp(A,":-)")) printf("I’m happy\n");
		else if (!strcmp(A,":-(")) printf("I’m unhappy\n"); 
		else if (!strcmp(A,";-)")) printf("wink\n");
		else if (!strcmp(A,":-P")) printf("stick out my tongue\n");
		else if (!strcmp(A,"(~.~)")) printf("sleepy\n");
		else if (!strcmp(A,"TA")) printf("totally awesome\n");
		else if (!strcmp(A,"CCC")) printf("Canadian Computing Competition\n");
		else if (!strcmp(A,"CUZ")) printf("because\n");
		else if (!strcmp(A,"TY")) printf("thank-you\n");
		else if (!strcmp(A,"YW")) printf("you’re welcome\n");
		else printf("%s\n",A);
	}
}