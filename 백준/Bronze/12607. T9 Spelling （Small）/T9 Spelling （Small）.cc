#include <iostream>
#define MAX 26
using namespace std;
int main(){
    string B[MAX]={"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7","77","777","7777","8","88","888","9","99","999","9999"};
    int t;
    cin >> t;
    getchar();
    for (int i=1;i<=t;i++){
        string A;
        getline(cin,A);
        cout << "Case #" << i << ": ";
        if (A.front()==' '){
            cout << '0';
        }
        else {
            cout << B[A.front()-97];
        }
        for (int j=1;j<A.length();j++){
            if (A[j-1]==' ' || A[j]==' '){
                if (A[j-1]==A[j]){
                    cout << " 0";
                }
                else if (A[j-1]==' '){
                    cout << B[A[j]-97];
                }
                else {
                    cout << '0';
                }
                continue;
            }
            if (B[A[j-1]-97].front()==B[A[j]-97].front()) cout << ' ';
            cout << B[A[j]-97];
        }
        cout << "\n";
    }
    return 0;
}