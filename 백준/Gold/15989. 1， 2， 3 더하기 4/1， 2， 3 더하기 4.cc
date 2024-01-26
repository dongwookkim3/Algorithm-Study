#include <iostream>
#define MAX 10000
using namespace std;
int main(){
    int A[MAX+1]={1,1,2};
    for (int i=3;i<=MAX;i++){
        A[i]=A[i-3]+i/2+1;
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