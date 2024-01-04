#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	while(n--){
		string A,B;
		cin >> A >> B;
		string sA=A,sB=B;
		sort(sA.begin(),sA.end());
		sort(sB.begin(),sB.end());
		if (sA==sB){
			cout << A << " & " << B << " are anagrams.\n";
		}
		else {
			cout << A << " & " << B << " are NOT anagrams.\n";
		}
	}
    return 0;
}