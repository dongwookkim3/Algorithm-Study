#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    n=(n/100)*100;
    for (int i=0;i<=99;i++){
        if ((n+i)%m==0){
            cout.width(2);
            cout.fill('0');
            cout << i;
            break;
        }
    }
    return 0;
}