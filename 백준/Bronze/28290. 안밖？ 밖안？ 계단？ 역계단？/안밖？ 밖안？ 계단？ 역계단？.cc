#include <iostream>
using namespace std;
int main(){
	string A;
	getline(cin,A);
	if (A=="fdsajkl;" || A=="jkl;fdsa") cout << "in-out";
	else if (A=="asdf;lkj" || A==";lkjasdf") cout << "out-in";
	else if (A=="asdfjkl;") cout << "stairs";
	else if (A==";lkjfdsa") cout << "reverse";
	else cout << "molu";
	return 0;
}