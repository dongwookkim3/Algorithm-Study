#include <iostream>
using namespace std;
int main(){
    int index,k,t=210;
    cin >> index >> k;
    while(k--){
        int a;
        char c;
        cin >> a >> c;
        t-=a;
        if (t<=0){
            if (index%8==0){
                cout << 8;
            }
            else {
                cout << index%8;
            }
            return 0;
        }
        else if (c=='T'){
            index++;
        }
    }
    if (index%8==0){
        cout << 8;
    }
    else {
        cout << index%8;
    }
    return 0;
}