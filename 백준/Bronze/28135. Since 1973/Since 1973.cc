#include <iostream>
using namespace std;
int f(string A){
    return (A.find("50")!=string::npos);
}
int main(){
    int n,m=0;
    cin >> n;
    for (int i=1;i<=n;i++){
        m+=f(to_string(i-1))+1;
    }
    cout << m;
    return 0;
}