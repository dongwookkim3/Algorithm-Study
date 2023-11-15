#include <iostream>
#define MAX 100
using namespace std;
int main(){
	long long A[MAX+1]={0,1,1,1,2};
	for (int i=5;i<=MAX;i++){
		A[i]=A[i-1]+A[i-5];
	}
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		cout << A[a] << "\n";
	}
	return 0;
}