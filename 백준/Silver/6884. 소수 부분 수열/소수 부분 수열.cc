#include <iostream>
#include <cmath>
#include <vector>
#define MAX 100000000
using namespace std;
int main(){
    bool Prime[MAX+1]={true,true};
    for (long long i=2;i*i<=MAX;i++){
        if (!Prime[i]){
            for (long long j=i*i;j<=MAX;j+=i){
                Prime[j]=true;
            }
        }
    }
    int t;
    cin >> t;
    while(t--){
        bool f=false;
        int n;
        cin >> n;
        vector<int> A(n+1,0);
        for (int i=1;i<=n;i++){
            cin >> A[i];
            A[i]+=A[i-1];
        }
        for (int i=2;i<=n;i++){
            for (int j=i;j<=n;j++){
                if (!Prime[A[j]-A[j-i]]){
                    cout << "Shortest primed subsequence is length " << i << ": ";
                    for (int k=j-i+1;k<=j;k++){
                        cout << A[k]-A[k-1] << ' ';
                    }
                    cout << "\n";
                    f=true;
                    break;
                }
            }
            if (f){
                break;
            }
        }
        if (!f){
            cout << "This sequence is anti-primed.\n";
        }
    }
    return 0;
}