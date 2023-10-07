#include <iostream>
using namespace std;
int main(){
	int n,m=0;
	cin >> n;
	for (int i=1;i<=n;i++){
		string A;
		cin >> A;
		for (int i=0;A[i+1]!='\0';i++){
			if ((A[i]=='0' && A[i+1]=='1') || (A[i]=='O' && A[i+1]=='I')){
				m++;
				break;
			}
		}
	}
	cout << m;
	return 0;
}