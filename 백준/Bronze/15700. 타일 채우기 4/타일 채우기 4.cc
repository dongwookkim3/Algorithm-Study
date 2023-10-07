#include <iostream>
using namespace std;
int main(){
	long int n,m,t=0;
	cin >> n >> m;
	t+=(n/2)*m;
	t+=(n%2)*(m/2);
	cout << t;
	return 0;
}