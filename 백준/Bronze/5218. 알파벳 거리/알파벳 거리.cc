#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n--){
		string A,B;
		cin >> A >> B;
		cout << "Distances: ";
		for (int i=0;A[i]!='\0';i++){
			if (A[i]<=B[i]){
				cout << B[i]-A[i] << " ";
			}
			else cout << B[i]+26-A[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}