#include <iostream>
#include <algorithm>
#define MAX 3
using namespace std;
int main(){
    int A[MAX+1]={},B[MAX+1]={},m=0;
    for (int i=1;i<=MAX;i++){
        cin >> A[i];
    }
    for (int i=1;i<=MAX;i++){
        cin >> B[i];
        m+=max(0,B[i]-A[i]);
    }
    cout << m;
    return 0;
}