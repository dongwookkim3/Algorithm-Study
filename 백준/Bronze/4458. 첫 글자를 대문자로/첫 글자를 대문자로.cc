#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    getchar();
    while(n--){
        string A;
        getline(cin,A);
        if (A[0]>90){
            cout << (char)(A[0]-32);
        }
        else {
            cout << A[0];
        }
        for (int i=1;i<A.length();i++){
            cout << A[i];
        }
        cout << "\n";
    }
    return 0;
}