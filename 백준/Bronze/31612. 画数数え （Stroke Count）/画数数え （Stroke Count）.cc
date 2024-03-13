#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m=0;
    string A;
    cin >> n >> A;
    for (int i=0;i<A.length();i++){
        if (A[i]=='o'){
            m++;
        }
        else {
            m+=2;
        }
    }
    cout << m;
    return 0;
}