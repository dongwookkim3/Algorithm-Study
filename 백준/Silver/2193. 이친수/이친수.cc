#include <iostream>
#define MAX 90
using namespace std;
int main(){
    long long A[MAX+1]={0,1};
    int n;
    cin >> n;
    for (int i=2;i<=n;i++){
        A[i]=A[i-1]+A[i-2];
    }
    cout << A[n];
    return 0;
}