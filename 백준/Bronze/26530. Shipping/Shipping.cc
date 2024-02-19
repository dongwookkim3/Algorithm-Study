#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    cout << fixed;
    cout.precision(2);
    while(t--){
        int n;
        float m=0;
        cin >> n;
        while(n--){
            string A;
            float a,b;
            cin >> A >> a >> b;
            m+=a*b;
        }
        cout << '$' << m << "\n";
    }
    return 0;
}