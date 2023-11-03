#include <iostream>
using namespace std;
int main(){
	int A,B;
	while(cin >> A >> B){
		int n=A;
		while(A>=B){
			A-=B;
			n++;
			A++;
		}
		cout << n << "\n";
	}
	
	return 0;
}