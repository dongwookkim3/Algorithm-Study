#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n,m=100;
    cin >> n;
    while(n--){
        cout << m << "\n";
        m*=2;
        if (to_string(m)[to_string(m).length()/2]!='0'){
            long long a=to_string(m).length()/2+1;
            m=ceil((double)m/pow(10,a))*pow(10,a);
        }
    }
    return 0;
}