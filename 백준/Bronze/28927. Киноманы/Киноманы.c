#include <stdio.h>
int main(){
	int t1,t2,e1,e2,f1,f2,T1,T2;
	scanf("%d %d %d\n%d %d %d",&t1,&e1,&f1,&t2,&e2,&f2);
	T1=t1*3+e1*20+f1*120;
	T2=t2*3+e2*20+f2*120;
	if (T1>T2) printf("Max");
	else if (T1<T2) printf("Mel");
	else printf("Draw");
	return 0;
}