#include <iostream>
#define MAX 250000
using namespace std;
int main(){
    int n;
    while(cin >> n){
        int A[MAX+1]={};
        int max=-10000,m=0;
        if (n==0) break;
        for (int i=1;i<=n;i++){
            cin >> A[i];
            m+=A[i];
            if (m>max){
                max=m;
            }
            if (m<0){
                m=0;
            }
        }
        cout << max << "\n";
    }
    return 0;
}