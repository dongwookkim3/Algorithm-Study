#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a[11]={},b[11]={};
	for (int i=1;i<=10;i++){
		cin >> a[i];
	}
	for (int i=1;i<=10;i++){
		cin >> b[i];
	}
	sort(a+1,a+11);
	sort(b+1,b+11);
	cout << a[10]+a[9]+a[8] << " " << b[10]+b[9]+b[8];
	return 0;
}