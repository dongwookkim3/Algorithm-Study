#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for (int i=1;;i++){
    	int A,B,C;
    	cin >> A >> B >> C;
    	if (!A && !B && !C) return 0;
    	int T=(C/B)*A+min(C%B,A);
    	cout << "Case " << i << ": " << T << "\n";
	}
}