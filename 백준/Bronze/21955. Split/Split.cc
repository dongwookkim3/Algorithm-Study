#include <iostream>
using namespace std;
int main(){
    string A;
    cin >> A;
    cout << A.substr(0,A.length()/2) << ' ' << A.substr(A.length()/2,A.length()/2);
    return 0;
}