#include <iostream>
#define MAX 100000
using namespace std;
int main(){
    string A,B;
    for (long long i=1;i<=MAX;i++){
        A+=to_string(i);
    }
    cin >> B;
    for (long long i=0;;i++){
        if (A.substr(i,B.length())==B){
            cout << ++i;
            break;
        }
    }
    return 0;
}