#include <stdio.h>
#include <string.h>
int main(){
	int n,m=0;
	scanf("%d",&n);
	getchar();
	for (int i=1;i<=n;i++){
		char A[51]={};
		gets(A);
		if (!strcmp(A,"Never gonna give you up")) m++;
        else if (!strcmp(A,"Never gonna let you down")) m++;
        else if (!strcmp(A,"Never gonna run around and desert you")) m++;
        else if (!strcmp(A,"Never gonna make you cry")) m++;
        else if (!strcmp(A,"Never gonna say goodbye")) m++;
        else if (!strcmp(A,"Never gonna tell a lie and hurt you")) m++;
        else if (!strcmp(A,"Never gonna stop")) m++;
	}
	if (m!=n) printf("Yes");
	else printf("No");
	return 0;
}