#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        if (n%i==0){
            m+=i;
        }
    }
    cout << m*5-24;
    return 0;
}