#include <iostream>
#include <vector>
#include <algorithm>
#define NMAX 1000
#define MAX 5
using namespace std;
int main(){
    vector<int> A(NMAX+1,0);
    int n;
    cin >> n;
    for (int t=1;t<=n;t++){
        int m=0;
        vector<int> B(MAX+1,0);
        for (int i=1;i<=MAX;i++){
            cin >> B[i];
        }
        for (int i=1;i<=MAX;i++){
            for (int j=i+1;j<=MAX;j++){
                for (int k=j+1;k<=MAX;k++){
                    m=max(m,(B[i]+B[j]+B[k])%10);
                }
            }
        }
        A[t]=m;
    }
    int m=*max_element(A.begin(),A.end());
    for (int i=n;i>=1;i--){
        if (A[i]==m){
            cout << i;
            break;
        }
    }
    return 0;
}