#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        long long A;
        cin >> A;
        cout << (long long)pow(2,A)-1 << "\n";
    }
    return 0;
}