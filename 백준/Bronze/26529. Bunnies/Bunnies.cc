#include <iostream>
#define MAX 45
using namespace std;
int main(){
    long long A[MAX+1]={1,1};
    for (int i=2;i<=MAX;i++){
        A[i]=A[i-1]+A[i-2];
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