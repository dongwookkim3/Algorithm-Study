#include <iostream>
#define MAX 3333
using namespace std;
int main(){
    long long A[MAX+1]={1,3,13};
    for (int i=3;i<=MAX;i++){
        A[i]=(5*A[i-1]-3*A[i-2]+A[i-3]+10000000070)%1000000007;
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if (n%3==0){
            cout << A[n/3] << "\n";
        }
        else {
            cout << "0\n";
        }
    }
    return 0;
}