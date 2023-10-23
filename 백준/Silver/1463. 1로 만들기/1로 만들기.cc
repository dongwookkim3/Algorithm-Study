#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int t=0,n,index=1;
	bool A[3000001]={0,1},B[3000001]={0,1};
	cin >> n;
	if (n==1){
		cout << 0;
		return 0;
	}
	while(++t){
		for (int i=1;i<=index;i++){
			if (A[i]){
				B[i+1]=1;
				B[i*2]=1;
				B[i*3]=1;
			}
		}
		if (B[n]){
			cout << t;
			return 0;
		}
		else {
			for (int i=1;i<=1000000;i++){
				A[i]=B[i];
			}
		}
		if (index<=1000000) index*=3;
	}
}