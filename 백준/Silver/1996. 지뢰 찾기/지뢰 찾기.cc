#include <iostream>
#define MAX 1001
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    int A[MAX+1][MAX+1]={};
	cin >> n;
    for (int i=1;i<=n;i++){
    	for (int j=1;j<=n;j++){
    		char a;
    		cin >> a;
    		if (a>='0' && a<='9'){
    			A[i][j]=-a+48;
    			if (A[i+1][j]>=0) A[i+1][j]+=a-48;
    			if (A[i-1][j]>=0) A[i-1][j]+=a-48;
    			if (A[i+1][j-1]>=0) A[i+1][j-1]+=a-48;
    			if (A[i-1][j+1]>=0) A[i-1][j+1]+=a-48;
    			if (A[i+1][j+1]>=0) A[i+1][j+1]+=a-48;
    			if (A[i-1][j-1]>=0) A[i-1][j-1]+=a-48;
    			if (A[i][j+1]>=0) A[i][j+1]+=a-48;
    			if (A[i][j-1]>=0) A[i][j-1]+=a-48;
			}
		}
	}
    for (int i=1;i<=n;i++){
    	for (int j=1;j<=n;j++){
    		if (A[i][j]<0) cout << '*';
    		else if (A[i][j]>=10) cout << 'M';
    		else cout << A[i][j];
		}
		cout << "\n";
	}
    
    
    return 0;
}