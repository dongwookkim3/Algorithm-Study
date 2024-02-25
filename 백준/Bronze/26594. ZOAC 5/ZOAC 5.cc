#include <iostream>
using namespace std;
int main(){
    string A;
    cin >> A;
    for (int i=1;;i++){
        if (A[i]!=A.front()){
            cout << i;
            break;
        }
    }
    return 0;
}