#include <stdio.h>
int main(){
	int Ah,Am,As,Bh,Bm,Bs,Th,Tm,Ts,T;
	scanf("%d:%d:%d\n%d:%d:%d",&Ah,&Am,&As,&Bh,&Bm,&Bs);
	Th=Bh-Ah;
	Tm=Bm-Am;
	Ts=Bs-As;
	T=(Th+24)%24*3600+Tm*60+Ts;
	printf("%02d:%02d:%02d",T/3600,(T%3600)/60,T%60);	
	return 0;
}