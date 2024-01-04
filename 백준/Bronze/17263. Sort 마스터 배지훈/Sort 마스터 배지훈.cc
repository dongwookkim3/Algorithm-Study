#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n,m=0;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		m=max(m,a);
	}
	cout << m;
    return 0;
}