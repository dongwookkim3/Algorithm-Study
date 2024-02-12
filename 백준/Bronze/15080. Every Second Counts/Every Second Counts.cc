#include <iostream>
using namespace std;
int main(){
    int H1,H2,M1,M2,S1,S2;
    char c;
    cin >> H1 >> c >> M1 >> c >> S1 >> H2 >> c >> M2 >> c >> S2;
    cout << ((H2-H1)*3600+(M2-M1)*60+S2-S1+86400)%86400;
    return 0;
}