#include <vector>
using namespace std;
int solution(int n){
    vector<int> A(n,0);
    A[0]=A[1]=1;
    for (int i=2;i<n;i++){
        A[i]=(A[i-1]+A[i-2])%1234567;
    }
    return A[n-1];
}