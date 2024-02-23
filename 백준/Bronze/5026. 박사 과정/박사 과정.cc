#include <iostream>
#include <sstream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string A,B;
        cin >> A;
        if (A=="P=NP"){
            cout << "skipped\n";
        }
        else {
            int m=0;
            istringstream iss(A);
            while(getline(iss,B,'+')){
                m+=stoi(B);
            }
            cout << m << "\n";
        }
    }
    return 0;
}