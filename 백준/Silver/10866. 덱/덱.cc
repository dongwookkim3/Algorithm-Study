#include <iostream>
#include <deque>
using namespace std;
int main(){
	int n;
	deque<int> A;
	cin >> n;
	while(n--){
		string a;
		cin >> a;
		if (a=="push_front"){
			int x;
			cin >> x;
			A.push_front(x);
		}
		else if (a=="push_back"){
			int x;
			cin >> x;
			A.push_back(x);
		}
		else if (a=="pop_front"){
			if (A.empty()){
				cout << "-1\n";
			}
			else {
				cout << A.front() << "\n";
				A.pop_front();
			}
		}
		else if (a=="pop_back"){
			if (A.empty()){
				cout << "-1\n";
			}
			else {
				cout << A.back() << "\n";
				A.pop_back();
			}
		}
		else if (a=="size"){
			cout << A.size() << "\n";
		}
		else if (a=="empty"){
			cout << (A.empty()) << "\n";
		}
		else if (a=="front"){
			if (A.empty()){
				cout << "-1\n";
			}
			else {
				cout << A.front() << "\n";
			}
		}
		else if (a=="back"){
			if (A.empty()){
				cout << "-1\n";
			}
			else {
				cout << A.back() << "\n";
			}
		}
	}
	return 0;
}