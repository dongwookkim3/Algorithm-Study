#include <stdio.h>
int main(){
	int w=0,l=0;
	for (int i=1;i<=6;i++){
		char a;
		scanf("%c",&a);
		if (a=='W') w++;
		else l++;
		getchar();
	}
	if (w>=5) printf("1");
	else if (w>=3) printf("2");
	else if (w>=1) printf("3");
	else printf("-1");
	return 0;
}