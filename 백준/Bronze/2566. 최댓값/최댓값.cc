#include <iostream>
using namespace std;
int main(){
	int x=1,y=1,max=0;
	for (int i=1;i<=9;i++){
		for (int j=1;j<=9;j++){
			int a;
			cin >> a;
			if (a>max){
				max=a;
				x=i;
				y=j;
			}
		}
	}
	cout << max << endl;
	cout << x << " " << y;
	return 0;
}