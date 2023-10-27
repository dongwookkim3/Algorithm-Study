#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	if (n>=100){
		int m=0;
		for (int i=100;i<=n;i++){
			int a=i;
			if (i/100-(i%100)/10==(i%100)/10-i%10){
				m++;
			}
		}
		cout << m+99;
	}
	else cout << n;
	return 0;
}