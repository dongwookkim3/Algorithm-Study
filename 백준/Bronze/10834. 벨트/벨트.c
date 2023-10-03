#include <stdio.h>
int main(){
	int n,m=0,s=1;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		float a,b,c;
		scanf("%f %f %f",&a,&b,&c);
		m+=c;
		s*=b/a;
	}
	printf("%d %d",m%2,s);
	return 0;
}