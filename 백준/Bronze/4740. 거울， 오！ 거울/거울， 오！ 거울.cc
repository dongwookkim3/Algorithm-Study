#include <iostream>
using namespace std;
int main(){
	while(1){
		string A;
		getline(cin,A);
		if (A=="***") return 0;
		for (int i=A.length()-1;i>=0;i--){
			cout << A[i];
		}
		cout << "\n";
	}
}