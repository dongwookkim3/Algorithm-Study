#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double a,b,n;
	cin >> a >> b;
	double min=a/b;
	cin >> n;
	while(n--){
		double A,B;
		cin >> A >> B;
		if (A/B<min) min=A/B;
	}
	cout<<fixed;
	cout.precision(2);
	cout << min*1000;
	return 0;
}