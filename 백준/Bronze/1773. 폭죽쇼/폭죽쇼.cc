#include <iostream>
#define MAX 100
using namespace std;
int main(){
	int n,m,t=0;
	int A[MAX+1]={};
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		cin >> A[i];
	}
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			if (i%A[j]==0){
				t++;
				break;
			}
		}
	}
	cout << t;
	return 0;
}