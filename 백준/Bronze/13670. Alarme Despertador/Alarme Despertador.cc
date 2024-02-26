#include <iostream>
using namespace std;
int main(){
    int A,B,C,D;
    while(cin >> A >> B >> C >> D && (A || B || C || D)){
        cout << (C*60+D-A*60-B+1440)%1440 << "\n";
    }
    return 0;
}