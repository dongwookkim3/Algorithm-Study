#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n%2==0){
        cout << (n/2+1)*(n/2+1);
    }
    else {
        cout << ((n-1)/2+2)*((n-1)/2+1);
    }
    return 0;
}