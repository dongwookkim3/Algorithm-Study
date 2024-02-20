#include <iostream>
#include <algorithm>
#define MAX 24
using namespace std;
int main(){
    string A[MAX+1]={};
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        string a;
        cin >> a;
        A[i]=a;
        for (int j=0;j<a.length()-2;j++){
            if (a[j]==a[j+1] && a[j+1]==a[j+2]){
                cout << 0;
                return 0;
            }
        }
        sort(a.begin(),a.end());
        if (a[a.length()/2-1]==a[a.length()/2]){
            cout << 0;
            return 0;
        }
    }
    for (int i=1;i<=n;i++){
        string b;
        for (int j=1;j<=n;j++){
            b+=A[j][i-1];
        }
        for (int j=0;j<b.length()-2;j++){
            if (b[j]==b[j+1] && b[j+1]==b[j+2]){
                cout << 0;
                return 0;
            }
        }
        sort(b.begin(),b.end());
        if (b[b.length()/2-1]==b[b.length()/2]){
            cout << 0;
            return 0;
        }
    }
    cout << 1;
    return 0;
}