#include <iostream>
using namespace std;
int main(){
	int a=0;
	for (int i=1;i<=8;i++){
		string A;
		getline(cin,A);
		for (int j=0;j<=7;j++){
			if (A[j]=='P') a+=1;
			else if (A[j]=='N') a+=3;
			else if (A[j]=='B') a+=3;
			else if (A[j]=='R') a+=5;
			else if (A[j]=='Q') a+=9;
			else if (A[j]=='p') a-=1;
			else if (A[j]=='n') a-=3;
			else if (A[j]=='b') a-=3;
			else if (A[j]=='r') a-=5;
			else if (A[j]=='q') a-=9;
		}
	}
	cout << a;
	return 0;
}