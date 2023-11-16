#include <iostream>
using namespace std;
int GCD(int A,int B){
	if (B==0) return A;
	else return GCD(B,A%B);
}
int LCM(int A,int B){
	return A*B/GCD(A,B);
}
int main(){
	int n;
	cin >> n;
	while(n--){
		int A,B;
		cin >> A >> B;
		cout << LCM(A,B) << ' ' << GCD(A,B) << "\n";
	}	
	return 0;
}