#include <iostream>
#include <queue>
using namespace std;
int main(){
	queue<int> A;
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
		A.push(i);
	}
	for (int i=2;A.size()!=1;i++){
		if (i%2!=0) A.push(A.front());
		A.pop();
	}
	cout << A.front();
	return 0;
}