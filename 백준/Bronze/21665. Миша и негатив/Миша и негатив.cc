#include <iostream>
#define MAX 100
using namespace std;
int main(){
    string A[MAX]={};
    int n,m,s=0;
    cin >> n >> m;
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    for (int i=0;i<n;i++){
        string a;
        cin >> a;
        for (int j=0;j<a.length();j++){
            if (A[i][j]==a[j]){
                s++;
            }
        }
    }
    cout << s;
    return 0;
}