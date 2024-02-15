#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string A;
    cin >> A;
    for (int i=2;i<A.length();i++){
        if (A[i]-48!=A[i-1]*2-A[i-2]-48){
            cout << "흥칫뿡!! <(￣ ﹌ ￣)>";
            return 0;
        }
    }
    cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";
    return 0;
}