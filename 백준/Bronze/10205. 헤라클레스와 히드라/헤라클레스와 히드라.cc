#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int j=1;j<=t;j++){
        int m;
        string A;
        cin >> m >> A;
        for (int i=0;i<A.length();i++){
            if (A[i]=='c') m++;
            else m--;
        }
        cout << "Data Set " << j << ":\n" << m << "\n\n";
    }
    return 0;
}