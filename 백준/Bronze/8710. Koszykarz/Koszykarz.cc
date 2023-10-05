#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	for (int i=1;;i++){
		if (a+c*i>=b){
			cout << i;
			return 0;
		}
	}
}