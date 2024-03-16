#include <iostream>
using namespace std;
int main(){
    int m=5000,a;
    while(cin >> a){
        if (a==1) m-=500;
        else if (a==2) m-=800;
        else if (a==3) m-=1000;
    }
    cout << m;
    return 0;
}