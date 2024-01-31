#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int a,b,c,n,x,y,z;
  scanf("%d %d %d %d",&a,&b,&c,&n);
  x=n/a;
  y=n/b;
  z=n/c;
  for(int i=0;i<=x;++i){
    for(int j=0;j<=y;++j){
      for(int k=0;k<=z;++k){
        if(a*i+b*j+c*k == n){
          printf("1");
          exit(0);
        }
      }
    }
  }
  printf("0");
  return 0;
}