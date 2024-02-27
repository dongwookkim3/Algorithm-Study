#include <iostream>
#define MAX 1000000
using namespace std;
int main(){
    long long A[MAX+1]={};
    for (int i=1;i<=MAX;i++){
        A[i]=A[i-1]+i*i;
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