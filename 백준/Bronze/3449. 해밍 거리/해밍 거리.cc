#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int m=0;
        string A,B;
        cin >> A >> B;
        for (int i=0;i<A.length();i++){
            if (A[i]!=B[i]){
                m++;
            }
        }
        cout << "Hamming distance is " << m << ".\n";
    }
    return 0;
}