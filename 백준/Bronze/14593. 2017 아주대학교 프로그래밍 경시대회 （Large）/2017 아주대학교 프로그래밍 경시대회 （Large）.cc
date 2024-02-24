#include <iostream>
#include <algorithm>
#define MAX 10000
using namespace std;
struct S{
    int A;
    int B;
    int C;
    int D;
};
bool compare(S &A,S &B){
    if (A.A==B.A && A.B==B.B) return A.C<B.C;
    else if (A.A==B.A) return A.B<B.B;
    return A.A>B.A;
}
int main(){
    S A[MAX]={};
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> A[i].A >> A[i].B >> A[i].C;
        A[i].D=i+1;
    }
    sort(A,A+n,compare);
    cout << A[0].D;
    return 0;
}