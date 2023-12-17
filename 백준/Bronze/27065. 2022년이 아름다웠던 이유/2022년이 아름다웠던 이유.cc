#include <iostream>
#define MAX 5000
using namespace std;
int main(){
	int A[MAX+1]={};
	for (int i=1;i<=MAX;i++){
		for (int j=i*2;j<=MAX;j+=i){
			A[j]+=i;
		}
	}
	for (int i=1;i<=MAX;i++){
		if (A[i]>i) A[i]=1;
		else A[i]=0;
	}
	int n;
	cin >> n;
	while(n--){
		int a,t=0;
		cin >> a;
		if (A[a]==1){
			for (int i=1;i<a;i++){
				if (a%i==0){
					if (A[i]==1){
						t++;
						break;
					}
				}
			}
		}
		else t++;
		if (t==0){
			cout << "Good Bye\n";
		}
		else {
			cout << "BOJ 2022\n";
		}
	}
	return 0;
}