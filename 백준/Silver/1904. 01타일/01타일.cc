#include <iostream>
#define MAX 1000000
using namespace std;
int main(){
    long long A[MAX+1]={0,1,2};
    for (int i=3;i<=MAX;i++){
        A[i]=(A[i-1]+A[i-2])%15746;
    }
    int n;
    cin >> n;
    cout << A[n];
    return 0;
}