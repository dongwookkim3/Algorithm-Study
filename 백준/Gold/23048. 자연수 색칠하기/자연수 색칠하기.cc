#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m=2;
    cin >> n;
    vector<int> A(n+1,0);
    A[1]=1;
    for (long long i=2;i<=n;i++){
        if (!A[i]){
            for (long long j=i;j<=n;j+=i){
                A[j]=m;
            }
            m++;
        }
    }
    cout << m-1 << "\n";
    for (int i=1;i<=n;i++){
        cout << A[i] << ' ';
    }
    return 0;
}