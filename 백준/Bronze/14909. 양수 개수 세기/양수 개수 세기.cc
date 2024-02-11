#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m=0;
    while(cin >> n){
        if (n>0) m++;
    }
    cout << m;
    return 0;
}