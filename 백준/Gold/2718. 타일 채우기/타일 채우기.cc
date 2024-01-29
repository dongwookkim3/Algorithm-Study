#include <iostream>
#define MAX 30
using namespace std;
int main(){
    long long A[MAX+1]={0,1,5,11,36};
    for (int i=5;i<=MAX;i++){
        A[i]=(A[i-1]+5*A[i-2]+A[i-3]-A[i-4]);
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << A[n] << "\n";
    }
    return 0;
}