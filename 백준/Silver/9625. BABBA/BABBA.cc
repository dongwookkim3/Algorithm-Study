#include <iostream>
#define MAX 45
using namespace std;
int main(){
    long long A[MAX+1]={0,1,1};
    for (int i=3;i<=MAX;i++){
        A[i]=A[i-1]+A[i-2];
    }
    int n;
    cin >> n;
    cout << A[n-1] << ' ' << A[n];
    return 0;
}