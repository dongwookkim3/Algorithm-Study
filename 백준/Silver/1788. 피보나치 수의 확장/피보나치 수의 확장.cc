#include <iostream>
#define MAX 1000000
using namespace std;
int main(){
    int A[MAX+1]={0,1,1};
    for (int i=3;i<=MAX;i++){
        A[i]=(A[i-1]+A[i-2])%1000000000;
    }
    int n;
    cin >> n;
    if (n>0) cout << "1\n" << A[n];
    else if (n==0) cout << "0\n" << A[n];
    else if (n<0 && (n*-1)%2==0) cout << "-1\n" << A[n*-1];
    else cout << "1\n" << A[n*-1];
    return 0;
}