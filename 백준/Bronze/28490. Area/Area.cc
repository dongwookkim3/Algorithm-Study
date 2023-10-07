#include <iostream>
using namespace std;
int main(){
	int n,max=0;
	cin >> n;
	while(n--){
		int a,b;
		cin >> a >> b;
		if (a*b>max) max=a*b;
	}
	cout << max;
	return 0;
}