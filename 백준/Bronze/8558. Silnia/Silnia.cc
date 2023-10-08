#include <iostream>
using namespace std;
int main(){
	int A,t=1;
	cin >> A;
	for (int i=1;i<=A;i++){
		t*=i;
		t%=10;
	}
	cout << t;
	return 0;
}