#include <iostream>
using namespace std;
int f(int n){
	if (n>9) return f(n/10)+n%10;
	else return n;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	bool A[1000001]={};
	for (int i=1;i<=100000;i++){
		A[i+f(i)]=1;
	}
	for (int i=1;i<=10000;i++){
		if (!A[i]){
			cout << i << "\n";
		}
	}
	return 0;
}