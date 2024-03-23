#include <iostream>
using namespace std;
int main(){
    int n,A=0,B=0;
    cin >> n;
    for (int i=0;i<n;i++){
        int a;
        cin >> a;
        if (a%2) A++;
        else B++;
    }
    cout << (n/2+n%2==A);
    return 0;
}