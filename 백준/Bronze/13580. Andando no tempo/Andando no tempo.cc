#include <iostream>
using namespace std;
int main(){
    int A,B,C;
    cin >> A >> B >> C;
    if ((A==B || B==C || C==A) || (A+B==C || B+C==A || C+A==B)){
        cout << 'S';
    }
    else {
        cout << 'N';
    }
    return 0;
}