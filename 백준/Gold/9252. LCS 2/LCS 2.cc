#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 1000
using namespace std;
int main(){
    vector<vector<int>> A(MAX+1,vector<int> (MAX+1));
    string a,b,S;
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
    int n=a.length(),m=b.length();
    while(n && m){
        if (A[n-1][m]==A[n][m]){
            n--;
            continue;
        }
        else if (A[n][m-1]==A[n][m]){
            m--;
            continue;
        }
        if (a[n-1]==b[m-1]) S+=a[n-1];
        n--;
        m--;
    }
    reverse(S.begin(),S.end());
    cout << A[a.length()][b.length()] << "\n" << S;
    return 0;
}