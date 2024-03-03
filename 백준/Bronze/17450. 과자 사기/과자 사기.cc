#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    float S1,S2,N1,N2,U1,U2;
    cin >> S1 >> S2 >> N1 >> N2 >> U1 >> U2;
    float S=(S2*10)/(S1*10-500*(S1*10>=5000)),N=(N2*10)/(N1*10-500*(N1*10>=5000)),U=(U2*10)/(U1*10-500*(U1*10>=5000));
    if (max({S,N,U})==S) cout << 'S';
    else if (max({S,N,U})==N) cout << 'N';
    else if (max({S,N,U})==U) cout << 'U';
    return 0;
}