#include <stdio.h>
int main(){
	int n,m=0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		int t;
		scanf("%d",&t);
		if (t==1) m++;
		else if (t==-1) m--;
	}
	if (m>0) printf("Right");
	else if (m<0) printf("Left");
	else printf("Stay");
	return 0;
}