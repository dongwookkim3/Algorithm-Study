#include <iostream>
using namespace std;
int main(){
	int STR,DEX,INT,LUK,N;
	cin >> STR >> DEX >> INT >> LUK >> N;
	int T=STR+DEX+INT+LUK;
	N*=4;
	for (int i=0;;i++){
		if (T>=N){
			cout << i;
			return 0;
		}
		T+=1;
	}
}