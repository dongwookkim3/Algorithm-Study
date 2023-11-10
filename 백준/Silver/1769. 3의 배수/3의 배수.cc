#include <iostream>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long i=1,m;
	string A;
	getline(cin,A);
	if (A.length()==1){
		i=0;
		m=A[0]-48;
	}
	while(i++){
		m=0;
		for (long long j=0;j<A.length();j++){
			m+=A[j]-48;
		}
		if (m<=9) break;
		A=to_string(m);
	}
	cout << --i << "\n";
	if (m==3 || m==6 || m==9) cout << "YES";
	else cout << "NO";
	return 0;
}