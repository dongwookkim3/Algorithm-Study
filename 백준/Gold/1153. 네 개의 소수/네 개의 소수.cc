#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 1000000
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<bool> A(MAX+1);
    vector<int> B;
    int n;
    cin >> n;
    for (long long i=2;i*i<=MAX;i++){
        if (!A[i]){
            for (long long j=i*i;j<=MAX;j+=i){
                A[j]=true;
            }
        }
    }
    for (int i=2;i<=MAX;i++){
        if (!A[i]){
            B.push_back(i);
        }
    }
    for (int i=0;i<B.size();i++){
        for (int j=i;j<B.size() && B[i]+B[j]<=n;j++){
            for (int k=j;j<B.size() && B[k]<=n-B[i]-B[j]-B[k];k++){
                if (binary_search(B.begin(),B.end(),n-B[i]-B[j]-B[k])){
                    cout << B[i] << ' ' << B[j] << ' ' << B[k] << ' ' << n-B[i]-B[j]-B[k];
                    return 0;
                }
            }
        }
    }
    cout << -1;
    return 0;
}