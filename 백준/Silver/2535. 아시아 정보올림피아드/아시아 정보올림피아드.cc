#include <iostream>
#define MAX 1000
#define NMAX 100
using namespace std;
int main(){
	short n,a[4]={};
	int A[MAX+1]={};
	cin >> n;
	while(n--){
		short x,y,s;
		cin >> x >> y >> s;
		A[s]=x*NMAX+y;
	}
	for (int i=1;i<=3;i++){
		for (int j=MAX;;j--){
			if (A[j]){
				if (a[A[j]/NMAX]==2) continue;
				a[A[j]/NMAX]++;
				cout << A[j]/NMAX << ' ' << A[j]%NMAX << "\n";
				A[j]=0;
				break;
			}
		}
	}
	return 0;
}
