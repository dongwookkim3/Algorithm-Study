#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	for (int i=1;i<=t;i++){
		int a;
		cin >> a;
		if (a<=25){
			cout << "Case #" << i << ": World Finals\n";
		}
		else if (a<=1000){
			cout << "Case #" << i << ": Round 3\n";
		}
		else if (a<=4500){
			cout << "Case #" << i << ": Round 2\n";
		}
		else if (a<=30000){
			cout << "Case #" << i << ": Round 1\n";
		}
	}
	return 0;
}