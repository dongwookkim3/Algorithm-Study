#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string A;
    int n;
    cin >> n;
    for (int i=pow(9,4);i>=1;i/=9){
        if (n/i){
            A+=to_string(n/i);
            n%=i;
        }
        else if (!A.empty()){
            A+='0';
        }
    }
    cout << A;
    return 0;
}