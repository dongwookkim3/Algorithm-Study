#include <iostream>
using namespace std;
int main(){
    string A;
    cin >> A;
    while(A.length()>5){
        A.erase(A.begin());
    }
    if (A=="driip"){
        cout << "cute";
    }
    else {
        cout << "not cute";
    }
    return 0;
}