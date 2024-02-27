#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<string> A(n);
    getchar();
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    for (int i=0;i<n;i++){
        string B;
        cin >> B;
        for (int j=0;j<m;j++){
            if (A[i][j]!=B[j*2] || A[i][j]!=B[j*2+1]){
                cout << "Not Eyfa";
                return 0;
            }
        }
    }
    cout << "Eyfa";
    return 0;
}