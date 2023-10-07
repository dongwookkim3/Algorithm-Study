#include <iostream>
using namespace std;
int main(){
	int S,A,B,m=250;
	cin >> S >> A >> B;
	S-=A;
	while(S>0){
		m+=100;
		S-=B;
	}
	cout << m;
	return 0;
}