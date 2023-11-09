#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int y,m,d;
	char a,b;
	cin >> y >> a >> m >> b >> d;
	if (y<2023 || (y==2023 && m<9) || (y==2023 && m<=9 && d<=16)) cout << "GOOD";
	else cout << "TOO LATE";
	return 0; 
}