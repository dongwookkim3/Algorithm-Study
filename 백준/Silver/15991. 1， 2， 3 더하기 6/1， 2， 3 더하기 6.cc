#include <iostream>
#define MAX 100000
using namespace std;
int main(){
    long long A[MAX+1]={0,1,2};
    for (int i=3;i<=MAX;i++){
        A[i]=(A[i-1]+A[i-2]+A[i-3])%1000000009;
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << A[n/2+1] << "\n";
    }
    return 0;
}