#include <iostream>
#define MAX 201
using namespace std;
int main(){
	int A[MAX+1]={},P[MAX+1]={};
	int n,index=0,p=2,np=0;
	cin >> n;
	for (int i=2;i<=MAX;i++){
		if (P[i]==0){
			for (int j=i*i;j<=MAX;j+=i){
				P[j]=1;
			}
		}
	}
	for (int i=3;i<=MAX;i++){
		if (P[i]==0){
			np=i;
			A[index]=p*np;
			p=np;
			index++;
		}
	}
	for (int i=0;i<index;i++){
		if (A[i]>n){
			cout << A[i];
			return 0;
		}
	}
}