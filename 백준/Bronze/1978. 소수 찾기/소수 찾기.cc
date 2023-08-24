# include <stdio.h>
int main(){
  int Q,a,c=0;
  scanf("%d",&Q);
  while(Q--){
  	scanf("%d",&a);
  	int b=0;
  	for (int i=2;i<=a;i++){
  		if (a%i==0) b++;	
	}
	if (b==1) c++;
  }
  printf("%d",c);
  return 0;
}