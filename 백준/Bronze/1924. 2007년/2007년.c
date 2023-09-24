#include <stdio.h>
int main(){
	int m,d;
	scanf("%d %d",&m,&d);
	for (int i=1;i<m;i++){
		if (i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12) d+=3;
		else if (i==4 || i==6 || i==9 || i==11) d+=2;
	}
	d%=7;
	if (d==1) printf("MON");
	else if (d==2) printf("TUE");
	else if (d==3) printf("WED");
	else if (d==4) printf("THU");
	else if (d==5) printf("FRI");
	else if (d==6) printf("SAT");
	else if (d==0) printf("SUN");
	return 0;
}