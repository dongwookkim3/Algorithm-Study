#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    string A;
    cin >> n >> A >> m;
    A.erase(A.begin(),A.begin()+n-min(n,m));
    if (A.empty() || A.find('1')==string::npos) cout << "YES";
    else cout << "NO";
    return 0;
}