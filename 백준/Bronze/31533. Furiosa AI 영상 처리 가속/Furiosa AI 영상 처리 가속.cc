#include <iostream>
using namespace std;
int main(){
    double n,A,B;
    cin >> n >> A >> B;
    if (min(A,B)*2/n>max(A,B)){
        cout << max(A,B);
        return 0;
    }
    cout << fixed;
    cout.precision(7);
    cout << (double)min(A,B)*2/n;
    return 0;
}