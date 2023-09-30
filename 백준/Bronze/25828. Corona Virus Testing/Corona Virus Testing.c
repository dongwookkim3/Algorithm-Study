#include <stdio.h>
int main(){
    int g,p,t;
    scanf("%d %d %d",&g,&p,&t);
    if (p*g<g+t*p) printf("1");
    else if (p*g>g+t*p) printf("2");
	else printf("0"); 
    return 0;
}