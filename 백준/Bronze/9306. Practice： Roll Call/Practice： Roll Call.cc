#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    getchar();
    for (int i=1;i<=t;i++){
        string A,B;
        cin >> A >> B;
        cout << "Case " << i << ": " << B << ", " << A << "\n";
    }
    return 0;
}