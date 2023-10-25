#include <iostream>
using namespace std;
long GCD(long A,long B){
	if (!B) return A;
	else return GCD(B,A%B);
}
long LCM(long A,long B){
	return A*B/GCD(A,B);
}
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    while(n--){
    	int A,B;
    	cin >> A >> B;
    	cout << LCM(A,B) << "\n";
	}
    return 0;
}