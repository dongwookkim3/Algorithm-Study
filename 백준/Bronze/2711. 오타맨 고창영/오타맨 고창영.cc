#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	while(n--){
		int s;
		string A;
		cin >> s >> A;
		for (int i=0;A[i]!='\0';i++){
			if (i!=s-1) cout << A[i];
		}
		cout << "\n";
	}
	return 0;
}