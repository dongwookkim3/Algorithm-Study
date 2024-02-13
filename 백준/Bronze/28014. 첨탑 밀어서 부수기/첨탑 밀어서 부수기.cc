#include <iostream>
#include <vector>
#define MAX 5000000
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> A(MAX+1);
    int n,m=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> A[i];
        if (A[i]>=A[i-1]){
            m++;
        }
    }
    cout << m;
    return 0;
}