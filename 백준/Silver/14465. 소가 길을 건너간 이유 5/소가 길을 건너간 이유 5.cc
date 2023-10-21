#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int q,n,m,A[100001]={},max=0;
	for (int i=1;i<=100000;i++){
		A[i]=1;
	}
	cin >> q >> m >> n;
	while(n--){
		int a;
		cin >> a;
		A[a]--;
	}
	for (int i=1;i<=q;i++){
		A[i]+=A[i-1];
	}
	for (int i=1;i<=q;i++){
		if (i>=m+1) A[i]-=A[i-m];
		if (A[i]>max) max=A[i];
	}
	cout << m-max;
	return 0;
}