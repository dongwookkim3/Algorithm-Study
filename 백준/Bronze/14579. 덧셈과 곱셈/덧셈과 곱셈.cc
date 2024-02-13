#include <iostream>
#include <vector>
#define MAX 1000
using namespace std;
int main(){
    vector<int> A(MAX+1,0);
    for (int i=1;i<=MAX;i++){
        A[i]=A[i-1]+i;
    }
    int a,b,m=1;
    cin >> a >> b;
    for (int i=a;i<=b;i++){
        m*=A[i];
        m%=14579;
    }
    cout << m;
    return 0;
}