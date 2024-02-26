#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    getchar();
    while(t--){
        string A;
        int a=0,b=0;
        cin >> A;
        for (int i=0;i<A.length();i++){
            if (A[i]=='a') a++;
            else b++;
        }
        cout << min(a,b) << "\n";
    }
    return 0;
}