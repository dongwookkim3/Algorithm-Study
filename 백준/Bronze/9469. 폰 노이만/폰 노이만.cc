#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    cout << fixed;
    cout.precision(6);
    while(t--){
        int n;
        double A,B,C,D;
        cin >> n >> A >> B >> C >> D;
        cout << n << ' ' << A/(B+C)*D << "\n";
    }
    return 0;
}