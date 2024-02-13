#include <iostream>
#include <vector>
#define MAX 1000
using namespace std;
int main(){
    vector<vector<int>> A(MAX+1,vector<int>(MAX+1,0));
    int n,a,b;
    cin >> n >> a >> b;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cin >> A[i][j];
        }
    }
    for (int i=1;i<=n;i++){
        if (A[i][b]>A[a][b]){
            cout << "ANGRY";
            return 0;
        }
    }
    for (int i=1;i<=n;i++){
        if (A[a][i]>A[a][b]){
            cout << "ANGRY";
            return 0;
        }
    }
    cout << "HAPPY";
    return 0;
}