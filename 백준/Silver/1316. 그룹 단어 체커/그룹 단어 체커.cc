#include <iostream>
#define MAX 26
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    for (int t=1;t<=n;t++){
        string A;
        int B[MAX]={};
        cin >> A;
        B[A[0]-97]=1;
        for (int i=1;i<A.length();i++){
            if (B[A[i]-97] && A[i]!=A[i-1]){
                m++;
                break;
            }
            B[A[i]-97]++;
        }
    }
    cout << n-m;
    return 0;
}