#include <iostream>
#define MAX 10000000
using namespace std;
int main(){
    int A[MAX+1]={1,1};
    for (int i=2;i<=MAX;i++){
        A[i]=(A[i-1]+A[i-2])%10;
    }
    int n;
    cin >> n;
    cout << A[n];
    return 0;
}