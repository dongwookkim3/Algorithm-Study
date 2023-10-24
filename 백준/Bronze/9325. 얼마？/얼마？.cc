#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    	int m,n;
    	cin >> m >> n;
    	while(n--){
    		int a,b;
    		cin >> a >> b;
    		m+=a*b;
		}
		cout << m << "\n";
	}
    return 0;
}