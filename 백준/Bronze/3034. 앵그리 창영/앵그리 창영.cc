#include <iostream>
using namespace std;
int main(){
    int n,a,b;
    cin >> n >> a >> b;
    while(n--){
        int A;
        cin >> A;
        if (a*a+b*b>=A*A){
            cout << "DA\n";
        }
        else {
            cout << "NE\n";
        }
    }
    return 0;
}