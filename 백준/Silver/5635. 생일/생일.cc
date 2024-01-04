#include <iostream>
#include <algorithm>
#define MAX 100
using namespace std;
struct student{
	string name;
	int y;
	int m;
	int d;
};
bool compare(student A,student B){
	if (A.y==B.y && A.m==B.m) return A.d<B.d;
	if (A.y==B.y) return A.m<B.m;
	return A.y<B.y;
}
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    student S[MAX+1]={};
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
    	cin >> S[i].name >> S[i].d >> S[i].m >> S[i].y;
	}
	sort(S+1,S+n+1,compare);
	cout << S[n].name << "\n" << S[1].name;
	return 0;
}