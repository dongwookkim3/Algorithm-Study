#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    long long N,M,P;
    cin >> N >> M >> P;
    while(N--){
        int t=0;
        vector<int> A(M);
        for (int i=0;i<M;i++){
            cin >> A[i];
            if (A[i]==-1){
                t++;
            }
        }
        if (t==M){
            while(t--){
                P*=2;
            }
            continue;
        }
        sort(A.begin(),A.end());
        for (int i=t;i<M;i++){
            if (A[i]<=P){
                P+=A[i];
            }
            else if (A[i]>P && t){
                while(t--){
                    P*=2;
                    if (A[i]<=P){
                        P+=A[i];
                        break;
                    }
                }
                if (A[i]>P){
                    cout << 0;
                    return 0;
                }
            }
            else {
                cout << 0;
                return 0;
            }
        }
        while(t--){
            P*=2;
        }
    }
    cout << 1;
    return 0;
}