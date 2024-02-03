#include <iostream>
#define MAX 5
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    int f[MAX+1]={1};
    for (int i=1;i<=MAX;i++){
        f[i]=f[i-1]*i;
    }
    while(cin >> n && n!=0){
        int m=0;
        string A=to_string(n);
        for (int i=0;i<A.length();i++){
            m+=(A[i]-48)*f[A.length()-i];
        }
        cout << m << "\n";
    }
    return 0;
}