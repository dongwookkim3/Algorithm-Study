#include <iostream>
using namespace std;
int main(){
    string A,a,b;
    cin >> a >> b;
    for (int i=0;i<a.length();i++){
        A+=a[i];
        A+=b[i];
    }
    while(A.length()!=2){
        string B;
        for (int i=0;i<A.length()-1;i++){
            B+=(char)(((A[i]+A[i+1]-96)%10)+48);
        }
        A=B;
    }
    cout << A;
    return 0;
}