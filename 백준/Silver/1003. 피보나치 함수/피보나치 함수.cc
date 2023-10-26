#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long Z[41]={1,0,1},O[41]={0,1,1};
	for (int i=3;i<=40;i++){
		Z[i]=Z[i-1]+Z[i-2];
		O[i]=O[i-1]+O[i-2];
	}
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		cout << Z[a] << " " << O[a] << "\n";
	}
	return 0;
}