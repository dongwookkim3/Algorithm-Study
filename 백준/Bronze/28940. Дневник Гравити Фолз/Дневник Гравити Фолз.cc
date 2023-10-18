#include <iostream>
using namespace std;
int main(){
	int w,h,bw,bh,m=0;
	float bs;
	cin >> w >> h >> bs >> bw >> bh;
	if (bw>w || bh>h) cout << -1;
	else {
		double b=(w/bw)*(h/bh);
		while(1){
			if (bs>0){
				m++;
				bs-=b;
			}
			else {
				cout << m;
				break;
			}
		}
	}
	return 0;
}