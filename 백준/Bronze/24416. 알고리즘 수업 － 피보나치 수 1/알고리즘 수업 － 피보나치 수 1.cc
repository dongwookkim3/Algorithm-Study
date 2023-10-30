#include <iostream>
using namespace std;
int main(){
	long long A[41]={0,1,1,};
	for (int i=3;i<=40;i++){
		A[i]=A[i-1]+A[i-2];
	}
	int n;
	cin >> n;
	cout << A[n] << " " << n-2;
}