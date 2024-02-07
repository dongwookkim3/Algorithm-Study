#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    map<string,string> A;
    int n;
    cin >> n;
    while(n--){
        string a;
        cin >> a;
        string b=a;
        reverse(b.begin(),b.end());
        if (a==b){
            cout << a.length() << ' ' << a[a.length()/2];
            break;
        }
        if (A[a]==a){
            cout << a.length() << ' ' << a[a.length()/2];
            break;
        }
        reverse(a.begin(),a.end());
        A[a]=a;
    }
    return 0;
}