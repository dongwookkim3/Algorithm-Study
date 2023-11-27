#include <bits/stdc++.h>
#define MAX 500
using namespace std;
int main(){
	int n,m=0;
	cin >> n;
	for (int i=2;i<=MAX;i++){
		for (int j=1;j<i;j++){
			if (i*i==j*j+n) m++;
		}
	}
	cout << m;
	return 0;
}