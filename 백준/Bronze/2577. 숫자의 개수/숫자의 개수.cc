#include <stdio.h>
int main(){
	int a,b,c,T,i,A[10]={};
	scanf("%d\n%d\n%d",&a,&b,&c);
	T=a*b*c;
	while(T>0){
		i=T%10;
		A[i]+=1;
		T-=i;
		T/=10;
	}
	for (i=0;i<=9;i++){
		printf("%d\n",A[i]);
	}
	return 0;
}