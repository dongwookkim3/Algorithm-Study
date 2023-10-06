#include <iostream>
using namespace std;
int main(){
	while(1){
		int n,m=0,T[11]={};
		cin >> n;
		if (n==-1) return 0;
		for (int i=1;i<=n;i++){
			int k;
			cin >> k >> T[i];
			m+=k*(T[i]-T[i-1]);
		}
		cout << m << " miles" << endl;
	}
}