#include <iostream>
using namespace std;
int main(){
    int e,f,c,m=0;
    cin >> e >> f >> c;
    e+=f;
    while(e>=c){
        m+=e/c;
        e=e/c+e%c;
    }
    cout << m;
    return 0;
}