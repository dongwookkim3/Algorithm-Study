#include <iostream>
#define MAX 1024
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	long long n,m,t;
	long long A[MAX+1][MAX+1]={};
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cin >> A[i][j];
			A[i][j]+=A[i][j-1];
		}
	}
	cin >> t;
	while(t--){
		int x1,x2,y1,y2;
		long long s=0;
		cin >> y1 >> x1 >> y2 >> x2;
		for (int i=y1;i<=y2;i++){
			s+=A[i][x2]-A[i][x1-1];
		}
		cout << s << "\n";
	}
	return 0;
}