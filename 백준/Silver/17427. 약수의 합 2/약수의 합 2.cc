#include <iostream>
#define MAX 1000000
using namespace std;
int main(){
	long long A[MAX+1]={};
	for (int i=1;i<=MAX;i++){
		for (int j=i;j<=MAX;j+=i){
			A[j]+=i;
		}
		A[i]+=A[i-1];
	}
	int n;
	cin >> n;
	cout << A[n];
	
	return 0;
}