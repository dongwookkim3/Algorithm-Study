#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,m=0;
	cin >> n;
	while(n--){
		int A[4]={};
		for (int i=0;i<4;i++){
			cin >> A[i];
		}
		sort(A,A+4);
		if (A[0]==A[3]) m=max(m,A[0]*5000+50000);
		else if (A[0]==A[2] || A[1]==A[3]) m=max(m,A[1]*1000+10000);
		else if (A[0]==A[1] && A[2]==A[3]) m=max(m,(A[0]+A[2])*500+2000);
		else if (A[0]==A[1] || A[1]==A[2] || A[2]==A[3]){
			if (A[0]==A[1]) m=max(m,A[0]*100+1000);
			else if (A[1]==A[2]) m=max(m,A[1]*100+1000);
			else if (A[2]==A[3]) m=max(m,A[2]*100+1000);
		}
		else m=max(m,A[3]*100);
	}
	cout << m;
	return 0;
}