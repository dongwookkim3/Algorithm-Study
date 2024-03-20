#include <iostream>
using namespace std;
int main(){
    int A,B,C;
    cin >> A >> B >> C;
    for (int i=1;i<=C;i++){
        cout << A*C+B*i << ' ';
    }
    return 0;
}