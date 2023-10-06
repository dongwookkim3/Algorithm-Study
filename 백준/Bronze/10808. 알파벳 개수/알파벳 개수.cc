#include <iostream>
using namespace std;
int main(){
	int A[27]={};
	char w[101]={};
	cin >> w;
	for (int i=0;w[i]!='\0';i++){
		A[w[i]-96]++;
	}
	for (int i=1;i<=26;i++){
		cout << A[i] << " ";
	}
	return 0;
}