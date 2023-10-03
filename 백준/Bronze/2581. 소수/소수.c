#include <stdio.h>
int A[10001]={1,1,};
int main(){
	for (int i=2;i<=10000;i++){
		if (A[i]==0){
			for (int j=i*i;j<=10000;j+=i){
				A[j]=1;
			}
		}
	}
	long int a,b,t=0,m=10001;
	scanf("%ld %ld",&a,&b);
	for (int i=a;i<=b;i++){
		if (A[i]==0){
			t+=i;
			if (i<m) m=i;
		}
	}
	if (t==0) printf("-1");
	else printf("%ld\n%ld",t,m);
	return 0;
}