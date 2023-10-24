#include <iostream>
#define MAX 1000000
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	long long A[MAX+1]={};
	for (int i=1;i<=MAX;i++){
		for (int j=i;j<=MAX;j+=i){
			A[j]+=i;
		}
		A[i]+=A[i-1];
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << A[n] << "\n";
	}
	return 0;
}