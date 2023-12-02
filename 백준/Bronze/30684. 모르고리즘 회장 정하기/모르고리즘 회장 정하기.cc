#include <iostream>
#include <algorithm>
#define MAX 909090
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	int B[MAX+1]={};
	cin >> n;
	for (int i=1;i<=n+1;i++){
		string A;
		getline(cin,A);
		if (A.length()==3){
			B[A[0]*10000+A[1]*100+A[2]]++;
		}
	}
	for (int i=656565;i<=909090;i++){
		if (B[i]){
			cout << (char)(i/10000) << (char)((i%10000)/100) << (char)(i%100);
			return 0;
		}
	}
}