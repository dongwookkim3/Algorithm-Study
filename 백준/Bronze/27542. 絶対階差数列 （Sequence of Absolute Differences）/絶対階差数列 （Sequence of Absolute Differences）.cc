#include <iostream>
using namespace std;
int main(){
    int A;
    int n;
    cin >> n >> A;
    while(--n){
        int a;
        cin >> a;
        A=abs(A-a);
    }
    cout << A;
    return 0;
}