#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,m=200;
	cin >> n;
	while(n--){
		int A,B;
		cin >> A >> B;
		m=min(m,A+B);
	}
	cout << m;
	return 0; 
}