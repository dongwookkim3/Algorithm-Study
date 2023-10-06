#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,s1,s2,s3;
		cin >> n >> s1 >> s2 >> s3;
		cout << n << " " << s1+s2+s3 << " ";
		if (s1>=11 && s2>=8 && s3>=12 && s1+s2+s3>=55) cout << "PASS" << endl;
		else cout << "FAIL" << endl;
	}
	return 0;
}