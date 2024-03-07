#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 1000
using namespace std;
struct A{
    int a;
    int b;
    int c;
    int d;
};
bool compare(A X, A Y){
    if (X.b==Y.b && X.c==Y.c && X.d==Y.d) return X.a>Y.b;
    else if (X.b==Y.b && X.c==Y.c) return X.d>Y.d;
    else if (X.b==Y.b) return X.c>Y.c;
    return X.b>Y.b;
}
int main(){
    A A[MAX]={};
    int n,m;
    cin >> n >> m;
    for (int i=0;i<n;i++){
        cin >> A[i].a >> A[i].b >> A[i].c >> A[i].d;
    }
    sort(A,A+n,compare);
    cout << A[m-1].a;
    return 0;
}