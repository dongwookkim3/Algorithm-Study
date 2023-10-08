#include <iostream>
using namespace std;
int main(){
	int n=0,B[6]={};
	for (int i=1;i<=5;i++){
		string A;
		getline(cin,A);
		for (int j=0;A[j]!='\0';j++){
			if (A[j]=='F' && A[j+1]=='B' && A[j+2]=='I'){
				B[i]=1;
				n++;
			}
		}
	}
	if (n==0) cout << "HE GOT AWAY!";
	else {
		for (int i=1;i<=5;i++){
			if (B[i]==1) cout << i << " ";
		}
	}
	return 0;
}