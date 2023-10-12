#include <iostream>
using namespace std;
int m[100001]={0,1,2,4};
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string A,B;
	getline(cin,A);
	getline(cin,B);
	for (int i=0;i<A.length();i++){
		cout << max(A[i],B[i]);
	}
	return 0;
}