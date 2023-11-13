#include <iostream>
#include <algorithm>
#define MAX 300
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
		int a,b;
		cin >> a >> b;
		int index=a;
		for (int i=1;i<=n;i++){
			if (A[i]>=a && A[i]<=b){
				cout << index << ' ';
				index++;
			}
			else cout << A[i] << ' ';
		}
		cout << "\n";
	}
    return 0;
}