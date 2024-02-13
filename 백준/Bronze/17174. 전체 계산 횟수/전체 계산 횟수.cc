#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int s=n;
    while(n>0){
        n/=m;
        s+=n;
    }
    cout << s;
    return 0;
}