#include <iostream>
#define MAX 5000000
using namespace std;
int A[MAX+1];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	for (long long i=2;i*i<=MAX;i++){
		if (!A[i]){
			for (long long j=i*2;j<=MAX;j+=i){
				if (A[j]==0){
                    A[j]=i;
                }
			}
		}
	}
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		int m=A[a];
		while(1){
			if (m==0){
				cout << a;
				break;
			}
			cout << m << ' ';
			a/=m;
			m=A[a];
		}
		cout << "\n";
	}
	return 0;
}