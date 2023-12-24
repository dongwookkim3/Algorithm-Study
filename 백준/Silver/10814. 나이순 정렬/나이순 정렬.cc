#include <iostream>
#include <algorithm>
#define MAX 100000
using namespace std;
struct student{
	int age;
	string name;
}S[MAX+1];
bool compare(const student& a,const student& b){
	return a.age<b.age;
}
int main(){
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
		cin >> S[i].age >> S[i].name;
	}
	stable_sort(S+1,S+n+1,compare);
	for (int i=1;i<=n;i++){
		cout << S[i].age << ' ' << S[i].name << "\n";
	}
	return 0;
}