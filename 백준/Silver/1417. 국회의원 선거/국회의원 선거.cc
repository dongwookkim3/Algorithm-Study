#include <iostream>
#define MAX 50
using namespace std;
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int n,m=0;
	int A[MAX+1]={};
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> A[i];
	}
	while(1){
		int index=1;
		for (int i=1;i<=n;i++){
			if (A[index]<=A[i]) index=i;
		}
		if (index==1){
			cout << m;
			return 0;
		}
		else {
			A[index]--;
			A[1]++;
			m++;
		}
	}
}