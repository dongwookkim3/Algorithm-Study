#include <stdio.h>
#include <string.h>
int main(){
	char A[1001];
	int a;
	scanf("%d",&a);
	while(a--){
		scanf("%s",A);
		if (strlen(A)>9||strlen(A)<6) printf("no\n");
		else printf("yes\n");
	}
	
	
	return 0;
}