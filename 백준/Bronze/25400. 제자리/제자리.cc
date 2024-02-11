#include <iostream>
using namespace std;
int main(){
    int n,m=1,s=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        int a;
        cin >> a;
        if (a==m){
            s++;
            m++;
        }
    }
    cout << n-s;
    return 0;
}