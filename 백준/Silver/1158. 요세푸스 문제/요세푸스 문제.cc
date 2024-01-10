#include <iostream>
#include <queue>
using namespace std;
int main(){
	queue<int> A;
	int n,k;
	cin >> n >> k;
	for (int i=1;i<=n;i++){
		A.push(i);
	}
	cout << '<';
	for (int i=1;A.size()!=1;i++){
		if (i%k!=0) A.push(A.front());
		else cout << A.front() << ", ";
		A.pop();
	}
	cout << A.front() << '>';
	return 0;
}
