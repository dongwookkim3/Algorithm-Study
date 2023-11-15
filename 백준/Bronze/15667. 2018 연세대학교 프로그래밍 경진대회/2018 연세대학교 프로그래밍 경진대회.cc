#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for (int i=1;;i++){
		if (i*i+i+1==n){
			cout << i;
			return 0;
		}
	}
}