#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	if ((n/3+n%3)%2==0){
		cout << "CY";
	}
	else cout << "SK";
	return 0;
}