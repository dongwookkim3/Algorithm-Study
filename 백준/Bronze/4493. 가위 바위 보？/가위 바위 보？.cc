#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,A=0,B=0;
        cin >> n;
        while(n--){
            char a,b;
            cin >> a >> b;
            if (a=='R'){
                if (b=='S') A++;
                else if (b=='P') B++;
            }
            else if (a=='S'){
                if (b=='P') A++;
                else if (b=='R') B++;
            }
            else {
                if (b=='R') A++;
                else if (b=='S') B++;
            }
        }
        if (A>B) cout << "Player 1\n";
        else if (A<B) cout << "Player 2\n";
        else cout << "TIE\n";
    }
    return 0;
}