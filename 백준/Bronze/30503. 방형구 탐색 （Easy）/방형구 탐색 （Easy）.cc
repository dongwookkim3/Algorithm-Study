#include <iostream>
#define MAX 1000
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    int A[MAX+1]={};
    cin >> n;
    for (int i=1;i<=n;i++){
    	cin >> A[i];
	}
	cin >> m;
	while(m--){
		int mode,l,r,k,t=0;
		cin >> mode;
		if (mode==1){
			cin >> l >> r >> k;
			for (int i=l;i<=r;i++){
				if (A[i]==k) t++;
			}
			cout << t << "\n";
		}
		else {
			cin >> l >> r;
			for (int i=l;i<=r;i++){
				A[i]=0;
			}
		}
	}
	return 0;
}