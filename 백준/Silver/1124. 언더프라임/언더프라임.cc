#include <iostream>
using namespace std;
int main(){
	int ARR[100001]={1,1,};
	for (int i=2;i<=100000;i++){
		if (ARR[i]==0){
			for (long long j=(long long)i*2;j<=100000;j+=i){
				long long k=j;
				while(k%i==0){
					k/=i;
					ARR[j]++;
				}
			}
		}
	}
	int A,B,m=0;
	cin >> A >> B;
	for (int i=A;i<=B;i++){
		if (ARR[i]!=0 && ARR[ARR[i]]==0){
			m++;
		}
	}
	cout << m;
	return 0;
}