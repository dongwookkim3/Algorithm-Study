#include <iostream>
using namespace std;
int main(){
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    if (C<0 && D>=10) cout << "A storm warning for tomorrow! Be careful and stay home if possible!";
    else if (A>C) cout << "MCHS warns! Low temperature is expected tomorrow.";
    else if (B<D) cout << "MCHS warns! Strong wind is expected tomorrow.";
    else cout << "No message";
    return 0;
}