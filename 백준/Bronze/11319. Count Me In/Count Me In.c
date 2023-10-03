#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	for (int i=1;i<=n;i++){
		int a=0,b=0; 
		char A[1001]={};
		gets(A);
		for (int j=0;A[j]!='\0';j++){
			if (A[j]=='A' || A[j]=='E' || A[j]=='I' || A[j]=='O' || A[j]=='U' || A[j]=='a' || A[j]=='e' || A[j]=='i' || A[j]=='o' || A[j]=='u'){
				b++;
			}
			if (A[j]!=' ') a++;
		}
		printf("%d %d\n",a-b,b);
	}
	return 0;
}