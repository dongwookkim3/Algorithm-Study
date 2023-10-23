#include <iostream>
using namespace std;
int main(){
	int n=1;
	string A;
	cin >> A;
	for (int i=0;A[i]!='\0';i++){
		if (A[i]==',') n++;
	}
	cout << n;
	return 0;
}