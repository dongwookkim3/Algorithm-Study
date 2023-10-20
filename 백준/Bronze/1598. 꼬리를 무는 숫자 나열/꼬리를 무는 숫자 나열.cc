#include <iostream>
#include <cmath>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a,b,t=0;
	cin >> a >> b;
	a--;
	b--;
	t+=abs(b/4-a/4);
	t+=abs(b%4-a%4);
	cout << t;
	return 0;
}