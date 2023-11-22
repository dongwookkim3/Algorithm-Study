#include <iostream>
#define MAX 100
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while (1){
    	int n,m;
    	char A[MAX+2][MAX+2]={};
    	cin >> n >> m;
    	if (n==0 && m==0) return 0;
    	for (int i=1;i<=n;i++){
    		for (int j=1;j<=m;j++){
    			cin >> A[i][j];
			}
		}
		for (int i=1;i<=n;i++){
    		for (int j=1;j<=m;j++){
    			if (A[i][j]=='*') cout << '*';
    			else {
    				int t=0;
    				if (A[i+1][j]=='*') t++;
    				if (A[i-1][j]=='*') t++;
    				if (A[i][j+1]=='*') t++;
    				if (A[i][j-1]=='*') t++;
    				if (A[i+1][j+1]=='*') t++;
    				if (A[i+1][j-1]=='*') t++;
    				if (A[i-1][j+1]=='*') t++;
    				if (A[i-1][j-1]=='*') t++;
    				cout << t;
				}
			}
			cout << "\n";
		}
	}
    return 0;
}