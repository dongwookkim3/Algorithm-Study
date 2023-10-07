#include <iostream>
using namespace std;
int main(){
	int m=0;
	string A;
	getline(cin,A);
	for (int i=0;A[i]!='\0';i++){
		if (A[i]==':') m+=2;
		else if (A[i]=='_') m+=6;
		else m++;
	}
	cout << m;
	return 0;
}