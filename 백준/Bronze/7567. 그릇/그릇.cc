#include <iostream>
using namespace std;
int main(){
	int m=10;
	string A;
	getline(cin,A);
	for (int i=1;A[i]!='\0';i++){
		if (A[i]==A[i-1]) m+=5;
		else m+=10;
	}
	cout << m;
	return 0;
}