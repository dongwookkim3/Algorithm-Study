#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int A[6]={},n;
	long m=0;
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> A[i];
	}
	if (A[1]>=A[3]) m+=(A[1]-A[3])*508;
	else m+=(A[3]-A[1])*108;
	if (A[2]>=A[4]) m+=(A[2]-A[4])*212;
	else m+=(A[4]-A[2])*305;
	m+=A[5]*707;
	cout << m*4763;
	return 0;
}