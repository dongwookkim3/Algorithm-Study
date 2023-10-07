#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	string S;
	cin >> S;
	n+=3071;
	n=((S[0]&255)-234)*4096+((S[1]&255)-176)*64+((S[2]&255)-127);
	cout << n;
	return 0;
}