#include <iostream>
using namespace std;
int main(){
	float n,p;
	cin >> n >> p;
	if (p>30) cout << "Red";
	else if (p<=10 && n<=50)cout << "White";
	else cout << "Yellow";
	return 0;
}