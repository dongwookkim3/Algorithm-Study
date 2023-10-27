#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n;
	cin >> n;
	cout << (n-1)*(n-2)*n/6 << "\n" << 3;
	return 0;
}