#include <iostream>
using namespace std;
int main(){
    string A,B;
    getline(cin,A);
    cin >> B;
    for (int i=0;i<A.length();i++){
        if (A[i]==' ') continue;
        A[i]=((A[i]-97)-(B[i%B.length()]-96)+260)%26+97;
    }
    cout << A;
    return 0;
}