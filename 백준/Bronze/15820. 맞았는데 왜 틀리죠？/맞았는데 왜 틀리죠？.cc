#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    while(n--){
        int a,b;
        cin >> a >> b;
        if (a!=b){
            cout << "Wrong Answer";
            return 0;
        }
    }
    while(m--){
        int a,b;
        cin >> a >> b;
        if (a!=b){
            cout << "Why Wrong!!!";
            return 0;
        }
    }
    cout << "Accepted";
    return 0;
}