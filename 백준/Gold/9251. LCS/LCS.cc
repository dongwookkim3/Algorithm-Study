#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;
int main(){
    int A[MAX+1][MAX+1]={};
    string a,b;
    cin >> a >> b;
    for (int i=1;i<=a.length();i++){
        for (int j=1;j<=b.length();j++){
            if (a[i-1]==b[j-1]){
                A[i][j]=A[i-1][j-1]+1;
            }
            else {
                A[i][j]=max(A[i-1][j],A[i][j-1]);
            }
        }
    }
    cout << A[a.length()][b.length()];
    return 0;
}