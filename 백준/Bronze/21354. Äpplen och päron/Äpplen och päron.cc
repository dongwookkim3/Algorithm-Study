#include <iostream>
using namespace std;
int main(){
    int A,B;
    cin >> A >> B;
    if (A*7>B*13) cout << "Axel";
    else if (A*7<B*13) cout << "Petra";
    else cout << "lika";
    return 0;
}