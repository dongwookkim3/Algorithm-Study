#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    getchar();
    while(t--){
        long long A,B,C;
        char c,d;
        cin >> A >> c >> B >> d >> C;
        if (c=='+' && A+B==C) cout << "correct\n";
        else if (c=='-' && A-B==C) cout << "correct\n";
        else if (c=='*' && A*B==C) cout << "correct\n";
        else if (c=='/' && A/B==C) cout << "correct\n";
        else cout << "wrong answer\n";
    }
    return 0;
}