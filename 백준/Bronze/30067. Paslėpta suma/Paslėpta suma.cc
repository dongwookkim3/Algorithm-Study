#include <iostream>
using namespace std;
int main(){
	int A[11]={},t=0;
	for (int i=1;i<=10;i++){
		cin >> A[i];
		t+=A[i];
	}
	for (int i=1;i<=10;i++){
		if (t-A[i]==A[i]){
			cout << A[i];
			return 0;
		}
	}
}