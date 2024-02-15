#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    getchar();
    while(t--){
        string A;
        getline(cin,A);
        for (int i=0;i<A.length();i++){
            if (A[i]>=97 && A[i]<=122){
                A[i]-=32;
            }
        }
        string B=A;
        reverse(B.begin(),B.end());
        if (A==B) cout << "Yes\n";
        else cout << "No\n";
    }
}