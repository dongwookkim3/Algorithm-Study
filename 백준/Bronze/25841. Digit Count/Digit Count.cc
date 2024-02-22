#include <iostream>
using namespace std;
int f(string A,string C){
    int m=0;
    for (int i=0;i<A.length();i++){
        if (A.substr(i,C.length())==C){
            m++;
        }
    }
    return m;
}
int main(){
    int A,B,C,m=0;
    cin >> A >> B >> C;
    for (int i=A;i<=B;i++){
        m+=f(to_string(i),to_string(C));
    }
    cout << m;
    return 0;
}