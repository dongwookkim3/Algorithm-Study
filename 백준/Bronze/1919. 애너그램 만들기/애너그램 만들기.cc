#include <iostream>
#include <cmath>
#define MAX 26
using namespace std;
int main(){
    int a[MAX+1]={},b[MAX+1]={};
    int m=0;
    string A,B;
    cin >> A >> B;
    for (int i=0;i<A.length();i++){
        a[A[i]-96]++;
    }
    for (int i=0;i<B.length();i++){
        b[B[i]-96]++;
    }
    for (int i=1;i<=MAX;i++){
        m+=abs(a[i]-b[i]);
    }
    cout << m;
    return 0;
}