#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n,m=0;
	cin >> n;
	for (long long i=1;i<n;i++){
		m+=(n+1)*i;
	}
	cout << m;
	return 0;
}