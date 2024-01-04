#include <iostream>
using namespace std;
int main() {
	long long n;
	cin >> n;
	if (n%5==0){
		cout << n/5;
		return 0;
	}
	for (int i=1;i*3<=n;i++){
		if ((n-i*3)%5==0){
			cout << i+(n-i*3)/5;
			return 0;
		}
	}
	cout << -1;
    return 0;
}