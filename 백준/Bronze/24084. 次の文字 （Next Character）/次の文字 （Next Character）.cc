#include <iostream>
using namespace std;
int main(){
    int n;
    string A;
    cin >> n >> A;
    for (int i=1;i<A.length();i++){
        if (A[i]=='J'){
            cout << A[i-1] << "\n";
        }
    }
    return 0;
}