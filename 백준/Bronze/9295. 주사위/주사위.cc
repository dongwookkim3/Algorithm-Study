#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=1;i<=t;i++){
    	int n,m;
    	cin >> n >> m;
    	cout << "Case " << i << ": " << n+m << "\n";
	}
    return 0;
}