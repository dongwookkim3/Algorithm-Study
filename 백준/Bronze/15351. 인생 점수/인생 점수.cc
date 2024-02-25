#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    getchar();
    while(t--){
        string A;
        int m=0;
        getline(cin,A);
        for (int i=0;i<A.length();i++){
            if (A[i]==' ') continue;
            m+=A[i]-64;
        }
        if (m==100){
            cout << "PERFECT LIFE\n";
        }
        else {
            cout << m << "\n";
        }
    }
    return 0;
}