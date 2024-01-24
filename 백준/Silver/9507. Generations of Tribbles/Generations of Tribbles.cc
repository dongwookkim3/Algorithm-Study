#include <iostream>
#define MAX 67
using namespace std;
int main(){
    long long A[MAX+1]={1,1,2,4};
    for (int i=4;i<=MAX;i++){
        A[i]=A[i-1]+A[i-2]+A[i-3]+A[i-4];
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