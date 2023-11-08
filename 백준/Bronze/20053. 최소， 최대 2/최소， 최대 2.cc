#include <iostream>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		int max=-1000000,min=1000000;
		cin >> n;
		while(n--){
			int a;
			cin >> a;
			if (a>max) max=a;
			if (a<min) min=a;
		}
		cout << min << " " << max << "\n";
	}
	return 0;
}