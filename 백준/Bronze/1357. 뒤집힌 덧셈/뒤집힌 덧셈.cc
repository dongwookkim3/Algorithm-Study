#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string A,B;
	cin >> A >> B;
	reverse(A.begin(),A.end());
	reverse(B.begin(),B.end());
	int Astring=stoi(A);
	int Bstring=stoi(B);
	Astring+=Bstring;
	string S=to_string(Astring);
	reverse(S.begin(),S.end());
	int s=stoi(S);
	cout << s;
}