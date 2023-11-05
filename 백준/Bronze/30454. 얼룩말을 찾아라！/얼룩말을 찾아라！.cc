#include <iostream>
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int m,n,max=0,B[1001]={-1};
	cin >> m >> n;
	for (int j=1;j<=m+1;j++){
		int b=0;
		string A;
		getline(cin,A);
		for (int i=0;A[i]!='\0';i++){
			if (A[i]=='1' && A[i]!=A[i+1]) b++;
		}
		B[b]++;
		if (max<b) max=b;
	}
	cout << max << " " << B[max];
	return 0;
}