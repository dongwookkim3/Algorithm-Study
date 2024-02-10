#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 100
using namespace std;
int main(){
    int n,m;
    char A[MAX+1][MAX+1]={};
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cin >> A[i][j];
        }
    }
    cin >> m;
    if (m==1){
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                cout << A[i][j];
            }
            cout << "\n";
        }
    }
    else if (m==2){
        for (int i=1;i<=n;i++){
            for (int j=n;j>=1;j--){
                cout << A[i][j];
            }
            cout << "\n";
        }
    }
    else {
        for (int i=n;i>=1;i--){
            for (int j=1;j<=n;j++){
                cout << A[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}