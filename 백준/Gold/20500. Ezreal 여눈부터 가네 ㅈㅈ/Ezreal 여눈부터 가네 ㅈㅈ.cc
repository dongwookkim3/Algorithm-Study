#include <iostream>
#define MAX 1515
using namespace std;
int main(void){
    long long A[MAX+1]={0,0,1,1};
    for (int i=4;i<=MAX;i++){
        A[i]=(A[i-1]+A[i-2]*2)%1000000007;
    }
    int n;
    cin >> n;
    cout << A[n];
    return 0;
}