#include <iostream>
using namespace std;
int main(){
	int n,min=1001,m=0;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		m+=a;
		if (a%2==1 && a<min) min=a;
	}
	if (m%2==1) m-=min;
	cout << m;
	return 0;
}