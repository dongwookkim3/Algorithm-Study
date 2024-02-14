#include <iostream>
#include <string>
using namespace std;
int main(){
    int A,B,C;
    cin >> A >> B >> C;
    while(C--){
        if (A>B) B++;
        else A++;
    }
    cout << min(A,B)*2;
    return 0;
}