#include <iostream>
#define MAX 100
using namespace std;
int main(){
    long long A[MAX+1]={5,9,17,32,61};
    for (int i=5;i<=MAX;i++){
        A[i]=(A[i-1]+4*A[i-2]-3*A[i-3]-3*A[i-4]+A[i-5]+10000000000)%1000000000;
    }
    int n;
    cin >> n;
    cout << A[n];
    return 0;
}