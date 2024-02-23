#include <iostream>
using namespace std;
int main(){
    int A,B;
    string C;
    for (int i=1;cin >> A >> C >> B;i++){
        if (C==">"){
            cout << "Case " << i << ": ";
            if (A>B) cout << "true\n";
            else cout << "false\n";
        }
        else if (C==">="){
            cout << "Case " << i << ": ";
            if (A>=B) cout << "true\n";
            else cout << "false\n";
        }
        else if (C=="<"){
            cout << "Case " << i << ": ";
            if (A<B) cout << "true\n";
            else cout << "false\n";
        }
        else if (C=="<="){
            cout << "Case " << i << ": ";
            if (A<=B) cout << "true\n";
            else cout << "false\n";
        }
        else if (C=="=="){
            cout << "Case " << i << ": ";
            if (A==B) cout << "true\n";
            else cout << "false\n";
        }
        else if (C=="!="){
            cout << "Case " << i << ": ";
            if (A!=B) cout << "true\n";
            else cout << "false\n";
        }
        else {
            break;
        }
    }
    return 0;
}