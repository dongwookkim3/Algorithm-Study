#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin >> n && n!=0){
        cout << n << " => " << n*n-n+1 << "\n";
    }
    return 0;
}