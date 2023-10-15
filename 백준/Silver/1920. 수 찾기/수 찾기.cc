#include <iostream>
#include <algorithm>
using namespace std;
int A[100001]={};
bool bs(int s,int t,int e){
	if (s>e) return 0;
	int m=(s+e)/2;
	if (A[m]==t) return 1;
	else if (A[m]>t){
		return bs(s,t,m-1);
	}
	else return bs(m+1,t,e);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> A[i];
	}
	sort(A+1,A+n+1);
	cin >> m;
	while(m--){
		int a;
		cin >> a;
		if (bs(1,a,n)) cout << 1 << "\n";
		else cout << 0 << "\n";
	}
	return 0;
}