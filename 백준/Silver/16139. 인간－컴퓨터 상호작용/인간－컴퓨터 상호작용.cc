#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int A[27][200001]={};
	string s;
	getline(cin,s);
	for (int i=0;i<s.length();i++){
		A[s[i]-96][i]++;
		for (int j=1;j<=26;j++){
			A[j][i]+=A[j][i-1];
		}
	}
	/*
	for (int i=0;i<s.length();i++){
		for (int j=1;j<=26;j++){
			cout << A[j][i] << " ";
		}
		cout << "\n";
	}
	*/
	int n;
	cin >> n;
	while(n--){
		char w;
		int a,b;
		cin >> w >> a >> b;
		cout << A[w-96][b]-A[w-96][--a] << "\n";
	}
	return 0;
}