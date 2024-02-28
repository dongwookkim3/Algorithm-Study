#include <iostream>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<char,char> A;
    int n,m;
    cin >> n;
    while(n--){
        char a,b;
        cin >> a >> b;
        A[a]=b;
    }
    cin >> m;
    while(m--){
        char a;
        cin >> a;
        if (A.find(a)!=A.end()){
            cout << A[a];
        }
        else {
            cout << a;
        }
    }
    return 0;
}