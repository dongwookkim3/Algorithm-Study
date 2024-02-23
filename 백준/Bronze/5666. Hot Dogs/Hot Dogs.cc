#include <iostream>
#define MAX 10000
using namespace std;
int main(){
    float n,m;
    cout << fixed;
    cout.precision(2);
    while(cin >> n >> m){
        cout << n/m << "\n";
    }
    return 0;
}