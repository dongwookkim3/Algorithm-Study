#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	for (int i=1;i<=n;i++){
		int p;
		char A[10]={};
		scanf("%s %d",A,&p);
		printf("%s ",A);
		if (p>=97) printf("A+\n");
		else if (p>=90) printf("A\n");
		else if (p>=87) printf("B+\n");
		else if (p>=80) printf("B\n");
		else if (p>=77) printf("C+\n");
		else if (p>=70) printf("C\n");
		else if (p>=67) printf("D+\n");
		else if (p>=60) printf("D\n");
		else printf("F\n");
	}
	return 0;
}