#include <iostream>
using namespace std;
int main(){
	int n,x,y=1000;
	cin >> n;
	while(n--){
		int x1,y1;
		cin >> x1 >> y1;
		if (y>=y1){
			x=x1;
			y=y1;
		}
	}
	cout << x << ' ' << y;
	return 0;
}