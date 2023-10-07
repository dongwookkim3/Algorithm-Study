#include <iostream>
using namespace std;
int main(){
	int A,B,C;
	cin >> A >> B >> C;
	if (A>=1000 && (B>=8000 || C>=260)) cout << "Very Good";
	else if (A>=1000) cout << "Good";
	else cout << "Bad";
	return 0;
}