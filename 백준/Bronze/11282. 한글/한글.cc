#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	string S;
	cin >> n;
	n+=3071;
	S.push_back(n/4096+234);
	S.push_back(n/64%64+128);
	S.push_back(n%64+128);
	cout << S;
	return 0;
}