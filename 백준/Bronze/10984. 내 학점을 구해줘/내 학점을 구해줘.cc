#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    	int n,m=0;
    	float A=0;
    	cin >> n;
    	while(n--){
    		int a;
    		float b;
    		cin >> a >> b;
    		m+=a;
    		A+=b*a;
		}
		cout << m << " " << A/m << "\n";
	}
    return 0;
}