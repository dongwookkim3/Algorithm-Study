#include <iostream>
#include <string>
using namespace std;
int main(){
	int n,Q[6]={};
	cin >> n;
	while(n--){
		int a,b;
		cin >> a >> b;
		if (a==0 || b==0) Q[5]++;
		else if (a>0 && b>0) Q[1]++;
		else if (a>0 && b<0) Q[4]++;
		else if (a<0 && b>0) Q[2]++;
		else if (a<0 && b<0) Q[3]++;
	}
	cout << "Q1: " << Q[1] << "\n";
	cout << "Q2: " << Q[2] << "\n";
	cout << "Q3: " << Q[3] << "\n";
	cout << "Q4: " << Q[4] << "\n";
	cout << "AXIS: " << Q[5] << "\n";
	return 0;
}