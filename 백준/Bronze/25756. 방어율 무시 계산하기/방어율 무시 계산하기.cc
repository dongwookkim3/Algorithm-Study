#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double m=0;
    int n;
    cin >> n;
    cout << fixed;
    cout.precision(6);
    while(n--){
        double a;
        cin >> a;
        m=100-(1-m/100)*(100-a);
        cout << m << "\n";
    }
    return 0;
}