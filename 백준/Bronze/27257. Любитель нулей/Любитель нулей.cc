#include <iostream>
using namespace std;
int main(){
    int m=0;
    string A;
    cin >> A;
    while(A.back()=='0'){
        A.pop_back();
    }
    for (int i=0;i<A.size();i++){
        if (A[i]=='0'){
            m++;
        }
    }
    cout << m;
    return 0;
}