#include <iostream>
using namespace std;
int main(){
	int n,k,s=0;
	int m[7]={},g[7]={};
	cin >> n >> k;
	while(n--){
		int nam,hak;
		cin >> nam >> hak;
		if (nam) m[hak]++;
		else g[hak]++;
	}
	for (int i=1;i<=6;i++){
		s+=m[i]/k;
		s+=g[i]/k;
		if (m[i]%k) s++;
		if (g[i]%k) s++;
	}
	cout << s;
	return 0;
}
