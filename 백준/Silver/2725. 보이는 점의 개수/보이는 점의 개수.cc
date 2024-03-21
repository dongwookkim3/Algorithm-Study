#include <iostream>
#define MAX 1000
using namespace std;
int GCD(int A,int B){
    if (!B) return A;
    return GCD(B,A%B);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int A[MAX+1]={0,3};
    for (int i=2;i<=MAX;i++){
        A[i]=A[i-1];
        for (int j=1;j<i;j++){
            if (GCD(i,j)==1){
                A[i]+=2;
            }
        }
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << A[n] << "\n";
    }
    return 0;
}