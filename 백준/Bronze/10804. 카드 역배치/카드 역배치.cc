#include <iostream>
using namespace std;
int main(){
	int A[21]={};
	for (int i=1;i<=20;i++){
		A[i]=i;
	}
	int n=10;
	while(n--){
		int a,b;
		cin >> a >> b;
		for (int i=0;i<=(b-a)/2;i++){
			int t=A[a+i];
			A[a+i]=A[b-i];
			A[b-i]=t;
		}		
	}
	for (int i=1;i<=20;i++){
		cout << A[i] << " ";
	}
	return 0;
}