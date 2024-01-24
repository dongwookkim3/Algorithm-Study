#include <iostream>
#define MAX 35
using namespace std;
int main(){
    long long A[MAX+1]={1,1,2,5};
    for (int i=4;i<=MAX;i++){
        for (int j=0;j<=i-1;j++){
            A[i]+=A[j]*A[i-j-1];
        }
    }
    int n;
    cin >> n;
    cout << A[n];
    return 0;
}