#include <iostream>
#include <algorithm>
#define MAX 1000000
using namespace std;
bool compare(string A,string B){
	return A<B;
}
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,t=0;
    string A[MAX+1]={};
    cin >> n >> m;
    for (int i=1;i<=n+m;i++){
    	cin >> A[i];
	}
	sort(A+1,A+n+m+1,compare);
	for (int i=1;i<=n+m;i++){
		if (A[i]==A[i-1]){
			t++;
		}
	}
	cout << t << "\n";
	for (int i=1;i<=n+m;i++){
		if (A[i]==A[i-1]){
			cout << A[i] << "\n";
		}
	}
	return 0;
}