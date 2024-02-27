#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a=0,b=0;
        string A;
        cin >> n >> A;
        for (int i=0;i<n;i++){
            if (A[i]=='N') a++;
            else if (A[i]=='S') a--;
            else if (A[i]=='W') b++;
            else if (A[i]=='E') b--;
        }
        cout << abs(a)+abs(b) << "\n";
    }
    return 0;
}