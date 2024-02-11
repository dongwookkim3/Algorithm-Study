#include <iostream>
using namespace std;
int main(){
    int N,m,M,T,R;
    cin >> N >> m >> M >> T >> R;
    if (T+m>M){
        cout << -1;
        return 0;
    }
    int X=m;
    for (int i=1;;i++){
        if (X+T<=M){
            X+=T;
            N--;
            if (!N){
                cout << i;
                break;
            }
        }
        else {
            X-=R;
            if (X<m){
                X=m;
            }
        }
    }
    return 0;
}