#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    getchar();
    while(t--){
        string A;
        int a=0,b=0;
        getline(cin,A);
        for (int i=0;i<A.length();i++){
            if (A[i]=='G' || A[i]=='g'){
                a++;
            }
            else if (A[i]=='B' || A[i]=='b'){
                b++;
            }
        }
        if (a>b) cout << A << " is GOOD\n";
        else if (a<b) cout << A << " is A BADDY\n";
        else cout << A << " is NEUTRAL\n";
    }
    return 0;
}