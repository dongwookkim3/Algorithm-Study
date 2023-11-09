#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,t=0;
	cin >> n;
	while(n--){
		int A;
		cin >> A;
		t+=A;
	}
	cout << t;
	return 0; 
}