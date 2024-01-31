#include <stdio.h>
int rt,r_[6]={},n,k,g,o,i;
int main(){
	scanf("%d %d",&n,&k);
	while(n--){
		scanf("%d %d",&g,&o);
		if (o<=2) r_[1]+=1;
		else if (g==0){
			if (o<=4) r_[2]+=1;
			else  r_[3]+=1;
		}
		else{
			if (o<=4) r_[4]+=1;
			else  r_[5]+=1;
		}
	}
	for (i=1;i<6;i++){
		if (r_[i]%k==0) rt+=r_[i]/k;
		else rt+=r_[i]/k+1;
	}
	printf("%d",rt);
	return 0;
}
