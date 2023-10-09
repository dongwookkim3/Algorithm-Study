#include <iostream>
using namespace std;
int main(){
	int n,k=0;
	long m=0;
	bool A[1000001]={};
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> A[i];
		if (A[i]) k++;
	}
	for (int i=1;i<=n;i++){
		if (!A[i]){
			m+=k;
		}
		else k--;
	}
	cout << m;
	return 0;
}