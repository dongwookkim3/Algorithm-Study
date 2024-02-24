#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=1;i<=t;i++){
        long long a,b;
        cin >> a >> b;
        cout << "Scenario #" << i << ":\n" << (abs(b-a)+1)*(a+b)/2 << "\n\n";
    }
    return 0;
}