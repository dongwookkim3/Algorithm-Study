#include <iostream>
#define MAX 3000000
using namespace std;
bool f(int n){
	string A=to_string(n);
	for (int i=0;i<A.length()/2;i++){
		if (A[i]!=A[A.length()-1-i]) return 0;
	}
	return 1;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	bool A[MAX+1]={1,1};
	for (long i=2;i<=MAX;i++){
		for (long j=(long)i*i;j<=MAX;j+=i){
			A[j]=1;
		}
	}
	int n;
	cin >> n;
	for (int i=n;;i++){
		if (!A[i] && f(i)){
			cout << i;
			return 0;
		}
	}
}