#include <iostream>
using namespace std;
int main(){
    double A,B,C;
    while(cin >> A >> B >> C){
        for (int i=0;;i++){
            if (A>=C){
                cout << i << "\n";
                break;
            }
            A+=A*B/100;
        }
    }
    return 0;
}