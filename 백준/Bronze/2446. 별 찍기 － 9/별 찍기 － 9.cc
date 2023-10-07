#include <iostream>
using namespace std;
int main(){
	int n,i=0;
	cin >> n;
	for (int j=n*2-1;j>=1;j-=2){
		for (int k=1;k<=i;k++){
			cout << " ";
		}
		for (int k=1;k<=j;k++){
			cout << "*";
		}
		cout << endl;
		i++;
	}
	for (int j=3;j<=n*2-1;j+=2){
		for (int k=3;k<=i;k++){
			cout << " ";
		}
		for (int k=1;k<=j;k++){
			cout << "*";
		}
		cout << endl;
		i--;
	}
	return 0;
}