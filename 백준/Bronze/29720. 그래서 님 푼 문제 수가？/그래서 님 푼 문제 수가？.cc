#include <iostream>
using namespace std;
int main(){
    int A,B,C;
    cin >> A >> B >> C;
    cout << max(0,A-B*C) << ' ' << max(0,A-B*(C-1)-1);
    return 0;
}