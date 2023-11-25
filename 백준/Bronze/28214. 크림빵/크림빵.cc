#include <stdio.h>
int main(){
	int n,m,p,c=0,a;
	scanf("%d %d %d",&n,&m,&p);
	for (int i=1;i<=n;i++){
		int b=0;
		for (int j=1;j<=m;j++){
			scanf("%d",&a);
			if (a==1) b++;
		}
		if (b>=p) c++;
	}
	printf("%d",c);
	return 0;
}