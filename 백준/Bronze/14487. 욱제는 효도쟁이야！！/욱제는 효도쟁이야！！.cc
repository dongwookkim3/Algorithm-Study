#include <iostream>
using namespace std;
int main(){
    int n,m=0,max=0;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        m+=a;
        if (a>max){
            max=a;
        }
    }
    cout << m-max;
    return 0;
}