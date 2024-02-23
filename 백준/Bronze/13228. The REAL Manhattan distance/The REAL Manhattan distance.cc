#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int A1,A2,B1,B2,C1,C2;
        cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
        cout << C1+C2+abs(A1-A2)+abs(B1-B2) << "\n";
    }
    return 0;
}