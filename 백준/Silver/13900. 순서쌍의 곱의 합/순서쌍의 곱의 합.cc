#include <iostream>
using namespace std;
int main(){
	int n;
	long long m=0,p=0;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		p+=a*m;
		m+=a;
	}
	cout << p;
	return 0;
}