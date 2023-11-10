#include <iostream>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,t=0;
    bool B[1001]={};
    cin >> n >> m;
    while(m--){
    	int A;
    	cin >> A;
    	for (int i=A;i<=n;i+=A){
    		if (!B[i]){
    			t+=i;
    			B[i]=1;
			}
		}
	}
	cout << t;
	return 0;
}