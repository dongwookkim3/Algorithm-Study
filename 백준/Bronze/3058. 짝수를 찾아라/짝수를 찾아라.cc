#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	for (int i=1;i<=t;i++){
		int m=0,min=100;
		for (int j=1;j<=7;j++){
			int a;
			cin >> a;
			if (a%2==0){
				m+=a;
				if (a<min) min=a;
			}
		}
		cout << m << " " << min << endl;
	}
	return 0;
}