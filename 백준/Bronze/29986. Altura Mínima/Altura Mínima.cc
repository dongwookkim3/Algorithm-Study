#include <iostream>
using namespace std;
int main(){
	int n,m,t=0;
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		int a;
		cin >> a;
		if (m>=a) t++;
	}
	cout << t;
}