#include <iostream>
using namespace std;
int main(){
    int A,B,C,M,m=0,p=0;
    cin >> A >> B >> C >> M;
    for (int i=1;i<=24;i++){
        if (p+A<=M){
            p+=A;
            m+=B;
        }
        else {
            p=max(0,p-C);
        }
    }
    cout << m;
    return 0;
}