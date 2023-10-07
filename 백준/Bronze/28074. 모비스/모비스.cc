#include <iostream>
using namespace std;
int main(){
	int w[6]={};
	string A;
	getline(cin,A);
	for (int i=0;A[i]!='\0';i++){
		if (A[i]=='M') w[1]++;
		else if (A[i]=='O') w[2]++;
		else if (A[i]=='B') w[3]++;
		else if (A[i]=='I') w[4]++;
		else if (A[i]=='S') w[5]++;
	}
	if (w[1]&&w[2]&&w[3]&&w[4]&&w[5]) cout << "YES";
	else cout << "NO";
	return 0;
}