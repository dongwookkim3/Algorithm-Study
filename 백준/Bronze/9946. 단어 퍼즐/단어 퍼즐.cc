#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int i=0;
    string A,B;
    while(cin >> A >> B && (A!="END" || B!="END") && ++i){
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        cout << "Case " << i << ": ";
        if (A==B){
            cout << "same\n";
        }
        else {
            cout << "different\n";
        }
    }
    return 0;
}