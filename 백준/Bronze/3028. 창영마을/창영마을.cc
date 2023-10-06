#include <iostream>
using namespace std;
int main(){
	int B[4]={0,1,0,0};
	string A;
	getline(cin,A);
	for (int i=0;A[i]!='\0';i++){
		if (A[i]=='A'){
			int t=B[2];
			B[2]=B[1];
			B[1]=t;
		}
		else if (A[i]=='B'){
			int t=B[3];
			B[3]=B[2];
			B[2]=t;
		}
		else {
			int t=B[3];
			B[3]=B[1];
			B[1]=t;
		}
	}
	if (B[1]==1) cout << 1;
	else if (B[2]==1) cout << 2;
	else if (B[3]==1) cout << 3;
	return 0;
}