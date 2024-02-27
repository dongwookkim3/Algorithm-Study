#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        if (a!=1){
            m++;
        }
    }
    cout << m;
    return 0;
}