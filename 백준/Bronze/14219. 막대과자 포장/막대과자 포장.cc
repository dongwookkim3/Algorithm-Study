#include <iostream>
using namespace std;
int main(){
    int A,B;
    cin >> A >> B;
    if ((A*B)%3==0){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}