#include <iostream>
#define MAX 33333
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long A[MAX+1]={0,0,2};
    for (int i=3;i<=MAX;i++){
        A[i]=(A[i-1]*3)%1000000009;
    }
    int n;
    cin >> n;
    cout << A[n];
    return 0;
}