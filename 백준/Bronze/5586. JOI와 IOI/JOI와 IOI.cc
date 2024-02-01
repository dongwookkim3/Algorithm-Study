#include <iostream>
using namespace std;
int main(){
    string A;
    int m1=0,m2=0;
    cin >> A;
    for (int i=0;i<A.length()-2;i++){
        if (A.substr(i,3)=="JOI") m1++;
        else if (A.substr(i,3)=="IOI") m2++;
    }
    cout << m1 << ' ' << m2;
    return 0;
}