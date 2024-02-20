#include <iostream>
using namespace std;
int main(){
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    cout << ((C-A)*60+D-B+1440)%1440 << ' ' << ((C-A)*60+D-B+1440)%1440/30;
    return 0;
}