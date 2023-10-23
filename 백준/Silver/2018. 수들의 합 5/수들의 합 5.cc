#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,t=0;
	cin >> n;
	for (int i=1;i<=n;i++){
		int k=0;
		for (int j=i;j<=n;j++){
			k+=j;
			if (k==n){
				t++;
				break;
			}
			else if (k>n){
				break;
			}
		}
	}
	cout << t;
	return 0;
}