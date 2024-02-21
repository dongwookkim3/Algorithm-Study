#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m=0;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        if (a-n-1>m){
            m=a-n-1;
        }
    }
    cout << m;
    return 0;
}