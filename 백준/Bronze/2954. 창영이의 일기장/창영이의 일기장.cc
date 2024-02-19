#include <iostream>
using namespace std;
int main(){
    string A;
    getline(cin,A);
    for (int i=0;i<A.length();i++){
        if ((A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u') && A[i+1]=='p'){
            A.erase(A.begin()+i,A.begin()+i+2);
        }
    }
    cout << A;
    return 0;
}