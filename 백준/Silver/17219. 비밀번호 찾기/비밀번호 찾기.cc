#include <iostream>
#include <map>
using namespace std;
int main(){
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