#include <iostream>
using namespace std;
int main(){
    for (int i=1;;i++){
        long long R,W,L;
        cin >> R;
        if (R==0){
            break;
        }
        cin >> W >> L;
        cout << "Pizza " << i;
        if (W*W+L*L<=4*R*R){
            cout << " fits on the table.\n";
        }
        else {
            cout << " does not fit on the table.\n";
        }
    }
    return 0;
}