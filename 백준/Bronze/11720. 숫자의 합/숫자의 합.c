#include <stdio.h>
int main(){
	int n,a,i=0;
	scanf("%d",&n);
	for (;n>0;n--){
		scanf("%1d",&a);
		i+=a;
	}
	printf("%d",i);
	return 0;
}