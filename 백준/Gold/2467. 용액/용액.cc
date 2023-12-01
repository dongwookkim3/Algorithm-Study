#include <iostream>
#include <algorithm>
#include <cmath>
#define MAX 100000
using namespace std;
int main(){
	int n,m=2000000001,mt,pt;
	int P[MAX+1]={},M[MAX+1]={};
	int plus=0,minus=0;
	int pindex=0,mindex=0;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		if (a>=0){
			P[plus]=a;
			plus++;
		}
		else {
			M[minus]=a;
			minus++;
		}
	}
	sort(P,P+plus);
	sort(M,M+minus,greater<int>());
	if (plus==0){
		cout << M[1] << ' ' << M[0];
	}
	else if (minus==0){
		cout << P[0] << ' ' << P[1];
	}
	else {
		while(plus!=pindex || minus!=mindex){
			int t=P[pindex]+M[mindex];
			if (m>abs(t)){
				mt=mindex;
				pt=pindex;
				m=abs(t);
			}
			if (t>0){
				if (mindex!=minus) mindex++;
				else pindex++;
			}
			else if (t<0){
				if (pindex!=plus) pindex++;
				else mindex++;
			}
			else {
				cout << M[mindex] << ' ' << P[pindex];
				return 0;
			}
		}
		for (int i=0;P[i]+P[i+1]<=m;i++){
			cout << P[i] << ' ' << P[i+1];
			return 0;
		}
		for (int i=0;-(M[i]+M[i+1])<=m;i++){
			cout << M[i+1] << ' ' << M[i];
			return 0;
		}
		cout << M[mt] << ' ' << P[pt];
	}	
	return 0;
}