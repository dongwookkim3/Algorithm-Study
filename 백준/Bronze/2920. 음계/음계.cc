#include <stdio.h>
int main(){
	int A[9]={},b=0,c=0,i;
	for (i=1;i<=8;i++){
	scanf("%d",&A[i]);
	}	
	for (i=1;i<=8;i++){
		if (A[i]==i) b+=1;
		if (A[i]==9-i) c+=1;
	}
	if (b==8) printf("ascending");
	else if (c==8) printf("descending");
	else printf("mixed");
	return 0;
}