#include <iostream>
using namespace std;
int main(){
    int n;
    string A,B;
    cin >> n >> A >> B;
    if (n%2){
        for (int i=0;i<A.length();i++){
            if (A[i]==B[i]){
                cout << "Deletion failed";
                return 0;
            }
        }
        cout << "Deletion succeeded";
    }
    else {
        if (A==B) cout << "Deletion succeeded";
        else  cout << "Deletion failed";
    }
    return 0;
}