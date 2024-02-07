#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int t=1;t<=n;t++){
        string A;
        cin >> A;
        for (int i=0;i<A.length();i++){
            if (A[i]=='Z'){
                A[i]='A';
            }
            else {
                A[i]++;
            }
        }
        cout << "String #" << t << "\n" << A << "\n\n";
    }
    return 0;
}