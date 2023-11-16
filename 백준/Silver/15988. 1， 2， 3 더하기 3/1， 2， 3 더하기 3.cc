#include <iostream>
#define MAX 1000000
using namespace std;
int main(){
	long long A[MAX+1]={0,1,2,4};
	for (long long i=4;i<=MAX;i++){
		A[i]=(A[i-1]+A[i-2]+A[i-3])%1000000009;
	}
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		cout << A[a] << "\n";
	}
	return 0;
}