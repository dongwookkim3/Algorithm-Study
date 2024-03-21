#include <iostream>
using namespace std;
bool f(string A){
    int m=0;
    for (int i=0;i<A.length()/2;i++){
        m+=A[i]-48;
    }
    for (int i=A.length()/2;i<A.length();i++){
        m-=A[i]-48;
    }
    return m==0;
}
int main(){
    string A;
    cin >> A;
    int m=A.length();
    while(m){
        if (m%2){
            m--;
        }
        for (int i=0;i<=A.length()-m;i++){
            if (f(A.substr(i,m))){
                cout << m;
                return 0;
            }
        }
        m-=2;
    }
}