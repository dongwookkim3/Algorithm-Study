#include <iostream>
using namespace std;
int main(){
	int E,S,M,e=0,s=0,m=0;
	cin >> E >> S >> M;
	for (int i=1;;i++){
		e++;
		s++;
		m++;
		if (e>15) e=1;
		if (s>28) s=1;
		if (m>19) m=1;
		if (E==e && S==s && M==m){
			cout << i;
			return 0;
		}
	}
}