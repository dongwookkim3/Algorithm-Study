#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	for (int i=a;i<=b;i++){
		if ((i-a)%60==0){
			cout << "All positions change in year " << i << endl;
		}
	}	
	return 0;
}