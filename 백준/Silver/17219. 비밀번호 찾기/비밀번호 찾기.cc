#include <iostream>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<string,string> A;
    int n,m;
    cin >> n >> m;
    while(n--){
        string a,b;
        cin >> a >> b;
        A.insert({a,b});
    }
    while(m--){
        string a;
        cin >> a;
        auto s=A.find(a);
        cout << s->second << "\n";
    }
    return 0;
}