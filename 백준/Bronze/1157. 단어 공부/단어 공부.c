#include <stdio.h>
char a[1000001];
int i,T_[27],max,max2,b;
int main(){
	fgets(a,1000000,stdin);
	for (i=0;a[i]!='\0';i++){
		if (a[i]>95) a[i]-=32;
        T_[a[i]-64]+=1;
	}
	for (i=1;i<=26;i++){
		if (max<T_[i]){
			max=T_[i];
            b=i+64;
		}
	}
	for (i=1;i<=26;i++){
		if (max==T_[i]) max2+=1;
	}
	if (max2>1) printf("?");
	else printf("%c",b);
	return 0;
}