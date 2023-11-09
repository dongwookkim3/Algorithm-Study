#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,m,t=0;
	cin >> n >> m;
	while(n--){
		int A;
		cin >> A;
		t+=A/m;
	}
	cout << t;
	return 0; 
}