#include <iostream>
using namespace std;
int main(){
    int A,B,C;
    while(cin >> A >> B >> C && (A!=0 || B!=0 || C!=0)){
        if ((A+C)==2*B){
            cout << "AP " << C+B-A << "\n";
        }
        else {
            cout << "GP " << C*(B/A) << "\n";
        }
    }
    return 0;
}