#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int A[1000001]={1,1,};
	for (int i=2;i<=1000000;i++){
		if (!A[i]){
			for (long long j=(long long)i*i;j<=1000000;j+=i){
				A[j]++;
			}
		}
	}
	while(1){
		int n,i=0;
		cin >> n;
		if (n==0) return 0;
		while(++i){
			if (!A[i] && !A[n-i]){
				cout << n << " = " << i << " + " << n-i << "\n";
				break;
			}
		}
	}
}