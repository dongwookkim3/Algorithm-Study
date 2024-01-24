#include <iostream>
#define MAX 100000
using namespace std;
int main(){
    int A[MAX+1]={0,3,7};
    for (int i=3;i<=MAX;i++){
        A[i]=(A[i-1]*2+A[i-2])%9901;
    }
    int n;
    cin >> n;
    cout << A[n];
    return 0;
}