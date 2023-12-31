#include <iostream>
#include <algorithm>
#define MAX 20000
using namespace std;
bool compare(string A,string B){
	if (A.length()==B.length()){
		return A<B;
	}
	return A.length()<B.length();
}
int main(){
	string A[MAX+1]={};
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> A[i];
	}
	sort(A+1,A+n+1,compare);
	for (int i=1;i<=n;i++){
		if (A[i]==A[i-1]) continue;
		cout << A[i] << "\n";
	}
	return 0;
} 