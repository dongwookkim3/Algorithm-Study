#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	while(1){
		int a,b,c;
		cin >> a >> b >> c;
		if (!a && !b && !c) return 0;
		else if (max(max(a,b),c)>=a+b+c-max(max(a,b),c)) cout << "Invalid\n";
		else if (a==b && b==c) cout << "Equilateral\n";
		else if (a==b || b==c || c==a) cout << "Isosceles\n";
		else cout << "Scalene\n";
	}
}