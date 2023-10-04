#include <stdio.h>
int main(){
	int n,m=0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		int a;
		scanf("%d",&a);
		m+=a;
	}
	if (m%3==0) printf("yes");
	else printf("no");
}