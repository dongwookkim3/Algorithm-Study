#include <stdio.h>
int main(){
	int n,max=0;
	scanf("%d",&n);
	for (int i=1;i<=5000;i++){
		if (n%5==0){
			max+=n/5;
			n=0;
			break;
		}
		else if (n<3&&n<5) break;
		else{
			n-=3;
			max+=1;
		}
	}
	if (n!=0) printf("-1");
	else printf("%d",max);
	return 0;
}