#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=i;j<=n;j++){
            if (n>=i*j){
                m++;
            }
        }
    }
    cout << m;
    return 0;
}