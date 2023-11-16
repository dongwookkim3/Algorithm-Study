#include <iostream>
using namespace std;
int GCD(int A,int B){
	if (B==0) return A;
	else return GCD(B,A%B);
}
int main(){
	int n;
	cin >> n;
	while(n--){
		int A,B;
		cin >> A >> B;
		cout << GCD(A,B) << "\n";
	}
	return 0;
}