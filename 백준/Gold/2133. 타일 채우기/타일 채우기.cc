#include <iostream>
#define MAX 15
using namespace std;
int main(){
    long long A[MAX+1]={1,3};
    for (int i=2;i<=MAX;i++){
        A[i]=A[i-1]*4-A[i-2];
    }
    int n;
    cin >> n;
    if (n%2==0){
        cout << A[n/2];
    }
    else {
        cout << 0;
    }
    return 0;
}