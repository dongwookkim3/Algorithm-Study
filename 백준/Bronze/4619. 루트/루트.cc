#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,m;
	while(cin >> n >> m && (n || m)){
		for (int i=1;;i++){
			if (abs(n-pow(i,m))<abs(n-pow(i+1,m))){
				cout << i << "\n";
				break;
			}
		}
	}
	return 0;
}