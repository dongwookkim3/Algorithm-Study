#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    getchar();
    while(t--){
        string A,B;
        getline(cin,A);
        getline(cin,B);
        for (int i=0;i<A.length();i++){
            if (A[i]==' ') cout << ' ';
            else {
                cout << B[A[i]-65];
            }
        }
        cout << "\n";
    }
    return 0;
}