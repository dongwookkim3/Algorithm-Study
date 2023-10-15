#include <iostream>
#define MAX  7368787
bool A[MAX+1]={1,1,};
using namespace std;
int main(){
	for (int i=2;i<=MAX;i++){
		if (!A[i]){
			for (long long j=(long long)i*i;j<=MAX;j+=i){
				A[j]=1;
			}
		}
	}
	int n,m=0;
	cin >> n;
	for (int i=2;;i++){
		if (!A[i]) m++;
		if (m==n){
			cout << i;
			return 0;
		}
	}
}