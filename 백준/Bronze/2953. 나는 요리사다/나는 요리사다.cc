#include <stdio.h>
int main()
{
	int a1,a2,a3,a4,at,b1,b2,b3,b4,bt,c1,c2,c3,c4,ct,d1,d2,d3,d4,dt,e1,e2,e3,e4,et,max=0;
	scanf("%d %d %d %d",&a1,&a2,&a3,&a4); 
	scanf("%d %d %d %d",&b1,&b2,&b3,&b4); 
	scanf("%d %d %d %d",&c1,&c2,&c3,&c4); 
	scanf("%d %d %d %d",&d1,&d2,&d3,&d4); 
	scanf("%d %d %d %d",&e1,&e2,&e3,&e4); 
	at=a1+a2+a3+a4;
	bt=b1+b2+b3+b4;
	ct=c1+c2+c3+c4;
	dt=d1+d2+d3+d4;
	et=e1+e2+e3+e4;
	if (at>max) max=at;
	if (bt>max) max=bt;
	if (ct>max) max=ct;
	if (dt>max) max=dt;
	if (et>max) max=et;
	
	if (at==max) printf("1 %d",at);
	if (bt==max) printf("2 %d",bt);
	if (ct==max) printf("3 %d",ct);
	if (dt==max) printf("4 %d",dt);
	if (et==max) printf("5 %d",et);
	return 0;
}