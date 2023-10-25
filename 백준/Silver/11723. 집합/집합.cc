#include <iostream>
#define MAX 100
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	bool A[21]={};
	cin >> t;
	while(t--){
		int a;
		string B;
		cin >> B;
		if (B=="add"){
			cin >> a;
			A[a]=1;
		}
		else if (B=="remove"){
			cin >> a;
			A[a]=0;
		}
		else if (B=="check"){
			cin >> a;
			cout << A[a] << "\n";
		}
		else if (B=="toggle"){
			cin >> a;
			A[a]=!A[a];
		}
		else if (B=="all"){
			for (int i=1;i<=20;i++){
				A[i]=1;
			}
		}
		else if (B=="empty"){
			for (int i=1;i<=20;i++){
				A[i]=0;
			}
		}
	}
	return 0;
}