#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long n,m;
    cin >> n >> m;
    vector<long long> A(n);
    for (long long i=0;i<n;i++){
        cin >> A[i];
    }
    while(m--){
        long long a,b,c,s=0;
        cin >> a >> b >> c;
        for (long long i=b-1;i<c;i++){
            s+=A[i];
        }
        if (a==2){
            long long d,e;
            cin >> d >> e;
            for (long long i=d-1;i<e;i++){
                s-=A[i];
            }
        }
        else {
            long long t=A[b-1];
            A[b-1]=A[c-1];
            A[c-1]=t;
        }
        cout << s << "\n";
    }
    return 0;
}