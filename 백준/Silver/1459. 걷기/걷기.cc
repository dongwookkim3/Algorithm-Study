#include <iostream>
#include <cmath>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	long long X,Y,W,S;
	cin >> X >> Y >> W >> S;
	if (W*2<S){
		cout << (X+Y)*W;
	}
	else if (W>S){
		cout << min(X,Y)*S+abs(X-Y)/2*S*2+abs(X-Y)%2*W;
	}
	else {
		cout << min(X,Y)*S+abs(X-Y)*W;
	}
	return 0;
}