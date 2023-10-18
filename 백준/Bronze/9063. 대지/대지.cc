#include <iostream>
#include <climits>
using namespace std;
int main(){
	int n;
	int minx=INT_MAX,maxx=INT_MIN;
	int miny=INT_MAX,maxy=INT_MIN;
	cin >> n;
	for (int i=1;i<=n;i++){
		int a,b;
		cin >> a >> b;
		minx=min(a,minx);
		maxx=max(a,maxx);
		miny=min(b,miny);
		maxy=max(b,maxy);
	}
	cout << (maxx-minx)*(maxy-miny);
	return 0;
}