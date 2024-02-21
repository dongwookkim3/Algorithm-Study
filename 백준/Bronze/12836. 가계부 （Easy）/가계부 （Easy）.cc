#include <iostream>
#define MAX 10000
using namespace std;
int main(){
    long long A[MAX+1]={};
    int n,k;
    cin >> n >> k;
    while(k--){
        int m,a,b;
        cin >> m >> a >> b;
        if (m==1) A[a]+=b;
        else {
            long long s=0;
            for (int i=a;i<=b;i++){
                s+=A[i];
            }
            cout << s << "\n";
        }
    }
    return 0;
}