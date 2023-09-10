#include <stdio.h>
int main(){
	int n,t,odd=0,even=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&t);
		if (t%2==0) even++;
		else odd++;
	}
	if (even>odd) printf("Happy");
	else printf("Sad");
	return 0;
}