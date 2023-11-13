#include <iostream>
#define MAX 100000
using namespace std;
int main(){
	int A[MAX+1]={};
	int B[MAX+1]={};
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> A[i];
		A[i]+=A[i-1];
	}
	for (int i=1;i<=n;i++){
		cin >> B[i];
		B[i]+=B[i-1];
	}
	for (int i=n;;i--){
		if (A[i]-B[i]==0){
			cout << i;
			return 0;
		}
	}
}