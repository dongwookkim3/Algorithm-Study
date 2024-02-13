#include <iostream>
using namespace std;
int main(){
    int a=-1,b=-1;
    string A,B;
    cin >> A >> B;
    for (int i=0;i<A.length();i++){
        for (int j=0;j<B.length();j++){
            if (A[i]==B[j]){
                a=i;
                b=j;
                break;
            }
        }
        if (a!=-1 || b!=-1){
            break;
        }
    }
    for (int i=0;i<B.length();i++){
        if (b==i){
            cout << A << "\n";
            continue;
        }
        for (int j=0;j<A.length();j++){
            if (a==j){
                cout << B[i];
            }
            else {
                cout << '.';
            }
        }
        cout << "\n";
    }
    return 0;
}