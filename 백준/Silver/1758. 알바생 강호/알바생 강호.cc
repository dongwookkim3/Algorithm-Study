#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,A[100001]={};
	long long m=0;
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> A[i];
	}
	sort(A,A+n,greater<int>());
	for (int i=0;i<n;i++){
		m+=max(A[i]-i,0);
	}
	cout << m;
	return 0;
}