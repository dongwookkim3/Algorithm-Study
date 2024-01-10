#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	queue<int> A;
	int n;
	cin >> n;
	while(n--){
		string a;
		cin >> a;
		if (a=="push"){
			int x;
			cin >> x;
			A.push(x);
		}
		else if (a=="pop"){
			if (A.empty()==1){
				cout << "-1\n";
			}
			else {
				cout << A.front() << "\n";
				A.pop();
			}
		}
		else if (a=="size"){
			cout << A.size() << "\n";
		}
		else if (a=="empty"){
			cout << A.empty() << "\n";
		}
		else if (a=="front"){
			if (A.empty()==1){
				cout << "-1\n";
			}
			else {
				cout << A.front() << "\n";
			}
		}
		else if (a=="back"){
			if (A.empty()==1){
				cout << "-1\n";
			}
			else {
				cout << A.back() << "\n";
			}
		}
	}
	return 0;
}