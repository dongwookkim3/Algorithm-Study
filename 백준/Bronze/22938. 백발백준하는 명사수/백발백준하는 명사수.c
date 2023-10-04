#include <stdio.h>
#include <math.h>
int main(){
	long long int x1,x2,y1,y2,r1,r2;
	scanf("%lld %lld %lld\n%lld %lld %lld",&x1,&y1,&r1,&x2,&y2,&r2);
	if (sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))<r1+r2) printf("YES");
	else printf("NO");
}