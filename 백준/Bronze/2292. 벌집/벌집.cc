#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m=1,t=1;
	cin >> n;
	n--;
	while(n>0){
		n-=t*6;
		m++;
		t++;
	}
	cout << m;
	return 0;
}