#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string A,B="/-\\(@?>&%";
    while(cin >> A && A!="#"){
        int m=0;
        for (int i=0;i<A.length();i++){
            for (int j=0;j<B.length();j++){
                if (A[i]==B[j]){
                    m+=(j-1)*pow(8,A.length()-i-1);
                    break;
                }
            }
        }
        cout << m << "\n";
    }
    return 0;
}