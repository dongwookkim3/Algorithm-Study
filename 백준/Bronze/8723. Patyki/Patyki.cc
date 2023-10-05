#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	int s=min(min(a,b),c);
    int l=max(max(a,b),c);
    int m=a+b+c-s-l;
	if (a==b&&b==c){
		cout << 2;
	}
	else if (s*s+m*m==l*l){
		cout << 1;
	}
	else {
		cout << 0;
	}
	return 0;
}