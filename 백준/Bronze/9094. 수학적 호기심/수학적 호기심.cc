#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,p=0;
		cin >> n >> m;
		for (int i=1;i<n;i++){
			for (int j=i+1;j<n;j++){
				if ((i*i+j*j+m)%(i*j)==0) p++;
			}
		}
		cout << p << "\n";
	}
	return 0;
}