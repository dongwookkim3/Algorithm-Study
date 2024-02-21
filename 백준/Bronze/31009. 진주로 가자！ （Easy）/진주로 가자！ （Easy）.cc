#include <iostream>
#define MAX 1000
using namespace std;
int main(){
	int n,max=0,m=0;
	int A[MAX+1]={};
	cin >> n;
	for (int i=1;i<=n;i++){
		string s;
		cin >> s >> A[i];
		if (s=="jinju"){
			max=A[i];
		}
	}
	for (int i=1;i<=n;i++){
		if (A[i]>max){
			m++;
		}
	}
	cout << max << "\n" << m;
	return 0;
}