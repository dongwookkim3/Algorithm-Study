#include <iostream>
#define MAX 80
using namespace std;
int main(){
    long long A[MAX+1]={2,4};
    for (int i=2;i<=MAX;i++){
        A[i]=A[i-1]+A[i-2];
    }
    int n;
    cin >> n;
    cout << A[n];
    return 0;
}