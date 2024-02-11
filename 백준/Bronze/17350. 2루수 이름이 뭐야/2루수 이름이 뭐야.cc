#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        string A;
        cin >> A;
        if (A=="anj"){
            cout << "뭐야;";
            return 0;
        }
    }
    cout << "뭐야?";
    return 0;
}