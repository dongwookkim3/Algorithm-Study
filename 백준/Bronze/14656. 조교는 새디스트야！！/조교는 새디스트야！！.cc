#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        int a;
        cin >> a;
        if (a==i){
            m++;
        }
    }
    cout << n-m;
    return 0;
}