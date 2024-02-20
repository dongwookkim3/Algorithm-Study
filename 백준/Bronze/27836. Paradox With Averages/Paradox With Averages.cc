#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n,m,s=0,a=0,b=0;
        cin >> n >> m;
        vector<long long> A(n,0),B(m,0);
        for (int i=0;i<n;i++){
            cin >> A[i];
            a+=A[i];
        }
        for (int i=0;i<m;i++){
            cin >> B[i];
            b+=B[i];
        }
        for (int i=0;i<n;i++){
            if ((a-A[i])*n>a*(n-1) && (b+A[i])*m>b*(m+1)){
                s++;
            }
        }
        cout << s << "\n";
    }
    return 0;
}