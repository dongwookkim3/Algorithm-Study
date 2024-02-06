#include <iostream>
#include <map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<string,string> A;
    int n,m,s=0;
    cin >> n >> m;
    for (int i=0;i<n;i++){
        string a;
        cin >> a;
        A[a]=a;
    }
    while(m--){
        string a;
        cin >> a;
        if (A.find(a)!=A.end()){
            s++;
        }
    }
    cout << s;
    return 0;
}