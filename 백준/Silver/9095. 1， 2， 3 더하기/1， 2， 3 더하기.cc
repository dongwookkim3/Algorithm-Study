#include <iostream>
#include <algorithm>
using namespace std;
int f(int n){
	if (n==1) return 1;
	else if (n==2) return 2;
	else if (n==3) return 4;
	else return f(n-3)+f(n-2)+f(n-1);
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		cout << f(a) << "\n";
	}
	return 0;
}