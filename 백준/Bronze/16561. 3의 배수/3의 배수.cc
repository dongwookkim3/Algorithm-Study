#include <iostream>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m=0;
    cin >> n;
    for (int i=3;i<=n;i+=3){
    	for (int j=3;i+j<=n;j+=3){
    		int k=n-i-j;
    		if (k!=0 && k%3==0) m++;
		}
	}
	cout << m;
	return 0;
}