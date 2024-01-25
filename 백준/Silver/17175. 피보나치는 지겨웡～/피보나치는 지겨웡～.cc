#include <iostream>
#define MAX 50
using namespace std;
int main(){
    long long A[MAX+1]={1,1};
    for (int i=2;i<=MAX;i++){
        A[i]=(A[i-1]+A[i-2]+1)%1000000007;
    }
    int n;
    cin >> n;
    cout << A[n];
    return 0;
}