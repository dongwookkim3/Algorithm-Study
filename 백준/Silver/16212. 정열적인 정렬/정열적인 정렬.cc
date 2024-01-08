#include <iostream>
#include <algorithm>
#define MAX 500000
using namespace std;
int main(){
	int n;
	int A[MAX+1]={};
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> A[i];
	}
	sort(A+1,A+n+1);
	for (int i=1;i<=n;i++){
		cout << A[i] << ' ';
	}
	return 0;
}