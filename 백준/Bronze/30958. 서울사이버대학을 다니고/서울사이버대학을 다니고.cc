#include <iostream>
using namespace std;
int main(){
	int n,m=0;
	int A[130]={};
	string S;
	cin >> n;
	getchar();
	getline(cin,S);
	for (int i=0;i<S.length();i++){
		A[S[i]]++;
	}
	for (int i=97;i<123;i++){
		if (A[i]>m) m=A[i];
	}
	cout << m;
	return 0;
}