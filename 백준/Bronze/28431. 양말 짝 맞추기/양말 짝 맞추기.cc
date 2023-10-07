#include <iostream>
using namespace std;
int main(){
	int A[10]={};
	for (int i=1;i<=5;i++){
		int a;
		cin >> a;
		A[a]++;
	}
	for (int i=0;i<=9;i++){
		if (A[i]%2==1) cout << i;
	}
	return 0;
}