#include <iostream>
using namespace std;
int main(){
    int n,m=0,z=0;
    cin >> n;
    for (int i=0;i<n;i++){
        int a;
        cin >> a;
        if (!a){
            z++;
        }
        m+=a;
    }
    if (n/2+n%2<=z){
        cout << "INVALID";
    }
    else if (m>0){
        cout << "APPROVED";
    }
    else {
        cout << "REJECTED";
    }
    return 0;
}