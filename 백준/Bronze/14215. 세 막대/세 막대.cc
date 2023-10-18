#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	for (int i=a;i>=1;i--){
		for (int j=b;j>=1;j--){
			for (int k=c;k>=1;k--){
				int m=max(max(i,j),k);
				if (m<i+j+k-m){
					cout << i+j+k;
					return 0;
				}
			}
		}
	}
}