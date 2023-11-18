#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int Ds,Ys,Dm,Ym;
	cin >> Ds >> Ys >> Dm >> Ym;
	for (int i=1;;i++){
		if ((Ds+i)%Ys==0 && (Dm+i)%Ym==0){
			cout << i;
			return 0;
		}
	}
}