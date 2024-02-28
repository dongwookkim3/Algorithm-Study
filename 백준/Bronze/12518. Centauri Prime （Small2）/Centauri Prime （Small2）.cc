#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=1;i<=t;i++){
        string A;
        cin >> A;
        cout << "Case #" << i << ": " << A;
        if (A.back()=='Y' || A.back()=='y') cout << " is ruled by nobody.\n";
        else if (A.back()=='A' || A.back()=='E' || A.back()=='I' || A.back()=='O' || A.back()=='U' || A.back()=='a' || A.back()=='e' || A.back()=='i' || A.back()=='o' || A.back()=='u') cout << " is ruled by a queen.\n";
        else cout << " is ruled by a king.\n";
    }
    return 0;
}