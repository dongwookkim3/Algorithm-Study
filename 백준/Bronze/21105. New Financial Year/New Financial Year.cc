#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << fixed;
    cout.precision(6);
    while(n--){
        double A,B;
        cin >> A >> B;
        cout << A/(B/100+1) << "\n";
    }
    return 0;
}