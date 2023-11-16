#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
		int A,B,C;
		cin >> A >> B >> C;
		cout << "Case #" << i << ": ";
		if (max(A,max(B,C))>=A+B+C-max(A,max(B,C))) cout << "invalid!\n";
		else if (A==B && B==C) cout << "equilateral\n";
		else if (A==B || B==C) cout << "isosceles\n";
		else cout << "scalene\n";
	}
	return 0;
}