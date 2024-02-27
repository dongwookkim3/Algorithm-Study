#include <iostream>
using namespace std;
int main(){
    int A=0,B=0;
    for (int i=0;i<9;i++){
        string a;
        cin >> a;
        if (a=="Lion") A++;
        else B++;
    }
    if (A>B) cout << "Lion";
    else cout << "Tiger";
    return 0;
}