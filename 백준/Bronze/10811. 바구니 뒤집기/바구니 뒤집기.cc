#include <iostream>
using namespace std;
int main(){
	int n,m,A[101]={};
	for (int i=1;i<=100;i++){
		A[i]=i;
	}
	cin >> n >> m;
	while(m--){
		int a,b;
		cin >> a >> b;
		for (int i=0;a+i<=b-i;i++){
			int t=A[a+i];
			A[a+i]=A[b-i];
			A[b-i]=t;
		}
	}
	for (int i=1;i<=n;i++){
		cout << A[i] << " ";
	}
	return 0;
}