#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int A[10]={},m=0;
	for (int i=1;i<=9;i++){
		cin >> A[i];
		m+=A[i];
	}
	for (int i=1;i<=9;i++){
		for (int j=i+1;j<=9;j++){
			if (m-A[i]-A[j]==100){
				A[i]=100;
				A[j]=100;
			}
		}
	}
	sort(A+1,A+10);
	for (int i=1;i<=7;i++){
		cout << A[i] << "\n";
	}
	return 0;
}