#include <iostream>
#define MAX 50000
using namespace std;
int main(){
	int n,t=0;
	long long A[MAX+1]={};
	for (int i=1;i<=MAX;i++){
		A[i]=i;
		A[i]+=A[i-1];
	}
	cin >> n;
	while(n!=0){
		for (int i=1;;i++){
			if (A[i]>n){
				n-=A[i-1];
				t+=i-1;
				break;
			}
		}
	}
	cout << t;
	return 0;
}