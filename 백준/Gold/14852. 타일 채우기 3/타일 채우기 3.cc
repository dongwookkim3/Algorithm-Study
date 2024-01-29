#include <iostream>
#define MAX 1000000
using namespace std;
int main(){
    long long A[MAX+1]={1,2,7};
    for (int i=2;i<=MAX;i++){
        A[i]=(A[i-1]*3+A[i-2]-A[i-3]+1000000007)%1000000007;
    }
    int n;
    cin >> n;
    cout << A[n];
    return 0;
}