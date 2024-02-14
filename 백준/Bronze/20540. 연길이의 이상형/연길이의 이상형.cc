#include <iostream>
using namespace std;
int main(){
    string A;
    cin >> A;
    for (int i=0;i<A.length();i++){
        if (A[i]=='E') cout << 'I';
        else if (A[i]=='I') cout << 'E';
        else if (A[i]=='S') cout << 'N';
        else if (A[i]=='N') cout << 'S';
        else if (A[i]=='T') cout << 'F';
        else if (A[i]=='F') cout << 'T';
        else if (A[i]=='J') cout << 'P';
        else if (A[i]=='P') cout << 'J';
    }
    return 0;
}