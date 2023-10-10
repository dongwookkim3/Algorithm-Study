#include <iostream>
#include <string>
#include <map>
using std::cin;
using std::cout;
using std::string;
using std::map;
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,m;
	cin >> n >> m;
	map<string,int> name;
	map<int,string> num;
	for (int i=1;i<=n;i++){
		string A;
		cin >> A;
		name.insert({A,i});
		num.insert({i,A});
	}
	for (int i=1;i<=m;i++){
		int p=0;
		string A;
		cin >> A;
		if (A[0]>='0' && A[0]<='9'){
			cout << num[stoi(A)] << "\n";
		}
		else cout << name[A] << "\n";
	}
	return 0;
}