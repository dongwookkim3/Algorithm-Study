#include <iostream>
#define MAX 10000000
using namespace std; 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;
	int A[MAX*2+1]={};
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		A[a+MAX]++;
	}
	cin >> m;
	while(m--){
		int a;
		cin >> a;
		cout << A[a+MAX] << " ";
	}
	return 0;
}