#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    	int n,m;
    	cin >> n >> m;
    	cout << "You get " << n/m << " piece(s) and your dad gets " << n%m << " piece(s).\n";
	}
    return 0;
}