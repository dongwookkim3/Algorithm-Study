#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int m=0;
        string A;
        cin >> A;
        sort(A.begin(),A.end());
        for (int i=0;i<A.length();i++){
            if (A[i]!=A[i+1]){
                m++;
            }
        }
        cout << m << "\n";
    }
    return 0;
}