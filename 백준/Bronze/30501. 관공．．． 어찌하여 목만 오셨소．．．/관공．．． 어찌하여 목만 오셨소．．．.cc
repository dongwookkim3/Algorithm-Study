#include <iostream>
#define MAX 1000
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for (int i=0;i<=n;i++){
    	string A;
    	getline(cin,A);
    	for (int i=0;i<A.length();i++){
    		if (A[i]=='S'){
    			cout << A;
			}
		}
	}
	return 0;
}