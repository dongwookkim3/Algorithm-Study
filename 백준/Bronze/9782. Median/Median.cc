#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	for (int j=1;;j++){
		int t,A[101]={};
		cin >> t;
		if (t==0) return 0;
		for (int i=1;i<=t;i++){
			cin >> A[i];
		}
		if (t%2==0){
			float a=A[t/2]+A[t/2+1];
			a/=2;
			cout << "Case " << j << ": " << fixed << setprecision(1) << a << endl;
		}
		else {
			float a=A[t/2+1];
			cout << "Case " << j << ": " << fixed << setprecision(1) << a << endl;
		}
	}
}